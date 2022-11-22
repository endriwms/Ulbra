<?php

class ClientModel{

    public function listProducts(){
        require_once('db/ConnectClass.php');
        $ConnectClass = new ConnectClass();
        $ConnectClass -> openConnect();
        $Connetion = $ConnectClass -> getConn();

        $sql = "SELECT * FROM products";
        return $Connetion -> query($sql);
        
    }
}