<?php

class ContactController {

  var $ContactModel;

  public function __construct() {
    require_once('models/ContactModel.php');
    $this -> ContactModel = new ContactModel();
  }

  public function listContacts() {
    $result = $this->ContactModel -> listContacts();
    $arrayContact =  array();

    while ($line = $result -> fetch_assoc()) {
      array_push($arrayContact, $line);
    }
    header('Content-Type: application/json');
    echo json_encode($arrayContact);
  }

  public function consultContacts($idContact) {
    $result = $this -> ContactModel -> consultContact($idContact);
    if ($arrayContact = $result -> fetch_assoc()) {
      header ('Content-Type: application/json');
      echo json_encode($arrayContact);
    } else {
      header('Content-Type: application/json');
      echo ('
            {
              "error" : "1",
              "message" :"Cliente não encontrado!"
            }
      ');
    }
  }

  public function insertContacts(){
    $contact = json_decode(file_get_contents("php://input"));
    $contactArray = (array) $contact;
    $this -> ContactModel -> insertContact($contactArray);

    echo('{ "message" : "Contato Inserido" }');
  }

  public function updateContacts($idContact) {
    $contact = json_decode(file_get_contents("php://input"));
    $arrayContact = (array) $contact;
    $this -> ContactModel -> updateContact($idContact, $arrayContact);
    header ('Content-Type: application/json');
    echo ('
          {
            "success" : "2",
            "message" :"Cliente alterado!" 
          }
    ');
  }

  public function deleteContacts($idContact) {
    $this -> ContactModel -> deleteContact($idContact);
    header ('Content-Type: application/json');
    echo ('
          {
            "success" : "3",
            "message" :"Cliente deletado!"
          }
  ');
}
}