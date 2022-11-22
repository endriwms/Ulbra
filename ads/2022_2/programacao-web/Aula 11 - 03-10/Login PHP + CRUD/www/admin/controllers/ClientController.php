<?php
  class ClientController {
    public function listClients() {
      require_once('models/ClientModel.php');
      $ClientModel = new ClientModel();
      $result = $ClientModel -> listClients();

      $arrayClients = array();
      while ($line = $result -> fetch_assoc()) {
        array_push($arrayClients, $line);
      }

      require_once('views/templates/header.php');
      require_once('views/client/listClients.php');
      require_once('views/templates/footer.php');
    }

    public function insertClient() {
      require_once('views/templates/header.php');
      require_once('views/client/insertClient.php');
      require_once('views/templates/footer.php');
    }

    public function insertClientAction() {
      $arrayClient = array (
        'name' => $_POST['name'],
        'username' => $_POST['username'],
        'email' => $_POST['email'],
        'telefone' => $_POST['phone'],
        'endereço' => $_POST['address'],
      );

      require_once('models/ClientModel.php');
      $ClientModel = new ClientModel();
      $ClientModel -> insertClient($arrayClient);

      header('Location:?controller=client&action=listClients');
    }
  }
?>