<?php
  class listClients {
    public function registerView() {
      $arrayClient = array (
        'name' => $_POST['name'],
        'email' => $_POST['email'],
        'gender' => $_POST['gender'],
        'color' => $_POST['color'],
      );

      require_once('views/templates/header.php');
      require_once('views/client/registerView.php');
      require_once('views/templates/footer.php');
    }
  }
?>