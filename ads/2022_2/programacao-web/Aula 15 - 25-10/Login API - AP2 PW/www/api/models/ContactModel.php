<?php

   class ContactModel{

      var $connection;

      public function __construct() {
         require_once('db/ConnectClass.php');
         $ConnectClass = new ConnectClass();
         $ConnectClass -> openConnect();
         $this -> connection =  $ConnectClass -> getConn();
      }

      public function listContacts(){
         $sql = "SELECT * FROM contacts";
         return $this -> connection -> query($sql); 
      }

      public function consultContact($idContact){
      
         $sql = "
               SELECT * FROM contacts
               WHERE
                  idContact = $idContact
               ";
      return $this -> connection -> query($sql);        
      }

        public function insertContact($arrayContact) {
         $sql = "
            INSERT INTO 
               contacts (name, email, message)   
            VALUES
            (
               '{$arrayContact['name']}', 
               '{$arrayContact['email']}', 
               '{$arrayContact['message']}'
            )";

         return $this -> connection -> query($sql);
      }

      public function updateContact($idContact, $arrayContact){
         $sql = "
            UPDATE
               contacts
            SET
               name ='{$arrayContact['name']}',
               email ='{$arrayContact['email']}',
               message ='{$arrayContact['message']}',
            WHERE
               idContact = {$idContact}
         ";
         return $this -> connection -> query($sql);
      }

      public function deleteContact($idContact){
         $sql = "

         DELETE FROM contacts
            WHERE 
               idContact = {$idContact}
         ";
         return $this -> connection -> query($sql);
      }
   }
?>