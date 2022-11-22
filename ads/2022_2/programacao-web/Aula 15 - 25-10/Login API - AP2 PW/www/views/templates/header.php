<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Página PHP</title>
    <!--Links CSS-->
    <link rel="stylesheet" href="assets/css/style.css">
    <!-- Bootstrap -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"></script>
    <!--BS Icons-->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.8.3/font/bootstrap-icons.css">
</head>
<body>
  

  <header class="text-center p-5">
        <h1>Site PHP</h1>
    </header>

    <div class="container-fluid">
        <div class="row">
            <nav class="col-md-3 p-4">
              <h2>Menu</h2>
                <ul class="nav flex-column">
                    <li class="nav-item">
                      <a id="btnHome" class="nav-link" href="?controller=site&action=home">Home</a>
                    </li>
                    <li class="nav-item">
                      <a id="btnAbout" class="nav-link" href="?controller=site&action=about">Sobre</a>
                    </li>
                    <li class="nav-item">
                      <a id="btnProducts"class="nav-link" href="?controller=site&action=products">Produtos</a>
                    </li>
                    <li class="nav-item">
                      <a id="btnContact" class="nav-link" href="?controller=site&action=contact">Contato</a>
                    </li>
                  </ul>
                  <br>
                  <h2>Clientes</h2>
                  <ul class="nav flex-column">
                    <li class="nav-item">
                      <a id="btnHome" class="nav-link" href="?controller=client&action=register">Cadastro</a>
                    </li>
                  </ul>

                  <ul class="nav flex-column">
                    <li class="nav-item">
                      <a id="" class="nav-link" href="?controller=client&action=listClients">Lista Clientes</a>
                    </li>
                  </ul>
          
            </nav>
    
            <section class="col-md-9 p-4">