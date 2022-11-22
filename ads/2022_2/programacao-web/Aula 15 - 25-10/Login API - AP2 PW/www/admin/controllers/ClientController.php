<?php

    class ClientController{

        var $ClientModel;
        
        public function __construct() {
            if(!isset($_SESSION['user'])) {
                header('Location:?controller=main&action=login');
            }
            require_once('models/ClientModel.php');
            $this -> ClientModel = new ClientModel();
        }

        public function listClients(){
            $result = $this -> ClientModel -> listClients();
            $arrayClients =  array();
            
            while($line = $result -> fetch_assoc()){
                array_push($arrayClients, $line);
            }

            require_once('views/templates/header.php');
            require_once('views/client/listClients.php');
            require_once('views/templates/footer.php');

        }

        public function detailsClient($idClient){
            $result = $this -> ClientModel -> consultClient($idClient);
            if($arrayClient = $result -> fetch_assoc()){
                require_once('views/templates/header.php');
                require_once('views/client/detailsClient.php');
                require_once('views/templates/footer.php');
            }
        }

        public function insertClient() {
            require_once('views/templates/header.php');
            require_once('views/client/insertClient.php');
            require_once('views/templates/footer.php');
        }

        public function insertClientAction() {
            $client = array(
                'name' => $_POST['name'],
                'phone' => $_POST['phone'],
                'email' => $_POST['email'],
                'address' => $_POST['address']
            );

           $idClient = $this -> ClientModel -> insertClient($client);
           
           if(isset($_FILES["photo"]) && $_FILES['photo']['name'] != '') {
                $this -> savePhoto($idClient);
           }
            header('Location:?controller=client&action=listClients');
        }

        public function updateClient($idClient) {
            $result = $this -> ClientModel -> consultClient($idClient);
            if($arrayClient = $result -> fetch_assoc()){
                require_once('views/templates/header.php');
                require_once('views/client/updateClient.php');
                require_once('views/templates/footer.php');
        }
    }


        public function updateClientAction($idClient) {
            $client = array(
                'idClient' => $idClient,
                'name' => $_POST['name'],
                'phone' => $_POST['phone'],
                'email' => $_POST['email'],
                'address' => $_POST['address']
            );
            $this -> ClientModel -> updateClient($client);
                // FALTA ALTERAR
            if(is_file("assets/img/client{$idClient}.jpg")) {
                unlink("assets/img/client/{$idClient}.jpg");
                }
            
            header('Location:?controller=client&action=listClients');
        }

        public function deleteClient($idClient) {
            $this -> ClientModel -> deleteClient($idClient);

            if(is_file("assets/img/client{$idClient}.jpg")) {
            unlink("assets/img/client/{$idClient}.jpg");
            }
            header('Location:?controller=client&action=listClients');
        }



        public function savePhoto($id) {
            $foto_temp = $_FILES["photo"]["tmp_name"];	
            $foto_name = $_FILES["photo"]["name"];		
        
            $extensao = str_replace('.','',strrchr($foto_name, '.')); 
            $max_width = 600; 
            $max_height = 600; 
        
         
            $img = null;
      
            if ($extensao == 'jpg' || $extensao == 'jpeg') { 
                $img = imagecreatefromjpeg($foto_temp);
            } else if ($extensao == 'png') { 
                $img = imagecreatefrompng($foto_temp);
            } else if ($extensao == 'gif') { 
                $img = imagecreatefromgif($foto_temp); 
            }  else     
                $img = imagecreatefromjpeg($foto_temp); 
        
  
            if ($img) { 
      
                $width  = imagesx($img); 
                $height = imagesy($img); 
                $scale  = min($max_width/$width, $max_height/$height); 
               
                if ($scale < 1) { 
                    $new_width = floor($scale*$width); 
                    $new_height = floor($scale*$height);
             
                    $tmp_img = imagecreatetruecolor($new_width, $new_height);
                
                    imagecopyresampled($tmp_img, $img, 0, 0, 0, 0, 
                                    $new_width, $new_height, $width, $height);  
                    imagedestroy($img); 
                    $img = $tmp_img; 
                }           
            }
        
            $localFile = "assets/img/client/{$id}.jpg";
            imagejpeg($img, $localFile); 
        }


    }