package com.example.springbootapi;

import jakarta.transaction.Transactional;
import org.springframework.stereotype.Repository;
import jakarta.persistence.PersistenceContext;
import jakarta.persistence.EntityManager;

import java.util.List;

@Repository
public class PersonRepository {
   @PersistenceContext
   private EntityManager entityManager;

   public EntityPerson findById(Long id) {
      return entityManager.find(EntityPerson.class, id);
   }

   public List<EntityPerson> getAll() {
      return entityManager.createQuery("SELECT p FROM EntityPerson p", EntityPerson.class).getResultList();
   }

   @Transactional
   public EntityPerson save(EntityPerson person) {
      entityManager.persist(person);
      return person;
   }

   @Transactional
   public EntityPerson update(EntityPerson person) {
      return entityManager.merge(person);
   }

   @Transactional
   public void deleteById(Long id) {
      EntityPerson person = findById(id);
      if (person != null) {
         entityManager.remove(person);
      } else {
         System.out.println("pessoa não encontrada.");
      }
   }
}
