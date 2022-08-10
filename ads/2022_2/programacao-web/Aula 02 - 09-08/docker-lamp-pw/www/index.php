<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        echo '<h1>Minha página em PHP</h1>';

        $var = null;

        if(isset($var)){
            echo 'minha variavel var está setada';
        }else{
            echo 'mamou';
        }
    ?>
</body>
</html>