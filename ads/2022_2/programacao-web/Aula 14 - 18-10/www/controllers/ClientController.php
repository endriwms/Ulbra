<?php
  class ClientController {
    public function register() {
      require_once('views/templates/header.php');
      require_once('views/client/register.php');
      require_once('views/templates/footer.php');
    }

    public function registerView() {
      $arrayClient = array (
        'name' => $_POST['name'],
        'username' => $_POST['username'],
        'email' => $_POST['email'],
        'telefone' => $_POST['phone'],
        'gender' => $_POST['gender'],
      );

      require_once('views/templates/header.php');
      require_once('views/client/registerView.php');
      require_once('views/templates/footer.php');
    }

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
  }
?>