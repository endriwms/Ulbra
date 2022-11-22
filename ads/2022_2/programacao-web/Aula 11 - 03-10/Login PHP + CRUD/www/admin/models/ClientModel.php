<?
  class ClientModel {
    public function listClients() {
      require_once('db/ConnectClass.php');
      $ConnectClass = new ConnectClass();
      $ConnectClass -> openConnect();
      $connection = $ConnectClass -> getConn();

      $sql = "SELECT * FROM clients";
      return $connection -> query($sql);
    }

    public function consultClient($idClient) {
      require_once('db/ConnectClass.php');
      $ConnectClass = new ConnectClass();
      $ConnectClass -> openConnect();
      $connection = $ConnectClass -> getConn();

      $sql = "
        SELECT * FROM clients
          WHERE
            idClient = $idClient
      ";
      return $connection -> query($sql);
    }

    public function insertClient($arrayClient) {
      require_once('db/ConnectClass.php');
      $ConnectClass = new ConnectClass();
      $ConnectClass -> openConnect();
      $connection = $ConnectClass -> getConn();

      // var_dump($arrayClient);

      $sql = "
        INSERT INTO clients (name, email, phone, address)
          VALUES
            (
              '{$arrayClient['name']}', 
              '{$arrayClient['email']}', 
              '{$arrayClient['telefone']}', 
              '{$arrayClient['endereço']}
            )
      ";
      return $connection -> query($sql);
    }
  }
?>