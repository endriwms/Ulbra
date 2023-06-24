package com.example.springbootapi;

import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
public class PersonController {
  private final PersonRepository personRepository;
  public PersonController(PersonRepository personRepository) {
    this.personRepository = personRepository;
  }

  @GetMapping("/person/{id}")
  public EntityPerson getPersonById(@PathVariable Long id) {
    return personRepository.findById(id);
  }

  @GetMapping("/person/all")
  public List<EntityPerson> getAll() {
    return personRepository.getAll();
  }

  @PostMapping("/person")
  public EntityPerson addPerson(@RequestBody EntityPerson person) {
    return personRepository.save(person);
  }

  @PutMapping("/person")
  public EntityPerson updatePerson(@RequestBody EntityPerson person) {
    return personRepository.update(person);
  }

  @DeleteMapping("/person/{id}")
  public void deletePerson(@PathVariable Long id) {
    personRepository.deleteById(id);
  }
}
