<?php
    include('templates/header.php');

    if (isset($_GET['pages'])) {
        if ($_GET['pages'] == 'home') {
            include('pages/home.php');
        }
        if ($_GET['pages'] == 'about') {
            include('pages/about.php');
        }
        if ($_GET['pages'] == 'contato') {
            include('pages/contato.php'); 
        }
    } else {
        include('pages/home.php');  
    }
    
    include('templates/footer.php');  
?>

