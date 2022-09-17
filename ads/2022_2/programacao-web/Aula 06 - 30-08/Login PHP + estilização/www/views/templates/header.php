<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  
  <!----======== CSS ======== -->
  <link rel="stylesheet" href="assets/css/style.css">
  <link rel="stylesheet" href="assets/css/tables.css">
  <link rel="stylesheet" href="assets/css/form.css">

  <!----===== Boxicons CSS ===== -->
  <link href='https://unpkg.com/boxicons@2.1.1/css/boxicons.min.css' rel='stylesheet'></link>
  <!----===== JS ===== -->
</head>
<body>
<div class="sidebar">
    <div class="logo-details">
      <i class='bx bxl-c-plus-plus icon'></i>
        <div class="logo_name">Menu</div>
        <i class='bx bx-menu' id="btn" ></i>
    </div>
    <ul class="nav-list">
      <li>
          <i class='bx bx-search' ></i>
         <input type="text" placeholder="Search...">
         <span class="tooltip">Search</span>
      </li>

      <li>
        <a href="?controller=site&action=home">
          <i class='bx bx-grid-alt selected'></i>
          <span class="links_name">Home</span>
        </a>
        <span class="tooltip">Home</span>
      </li>

      <li>
       <a href="?controller=site&action=about">
        <i class='bx bx-info-circle'></i>
        <span class="links_name">Sobre</span>
       </a>
       <span class="tooltip">Sobre</span>
     </li>

     <li>
       <a href="?controller=site&action=contact">
         <i class='bx bx-chat' ></i>
         <span class="links_name">Contato</span>
       </a>
       <span class="tooltip">Contato</span>
     </li>

     <li>
       <a href="?controller=client&action=register">
        <i class='bx bxs-graduation'></i>
         <span class="links_name">Registrar</span>
       </a>
       <span class="tooltip">Registrar</span>
     </li>

     <li>
       <a href="?controller=client&action=listClients">
         <i class='bx bx-user' ></i>
         <span class="links_name">Listar Clientes</span>
       </a>
       <span class="tooltip">Listar Clientes</span>
     </li>

     <li class="profile">
        <div class="profile-details">
          <!--<img src="profile.jpg" alt="profileImg">-->
          <div class="name_job">
            <div class="name">Usuário</div>
            <div class="job">Padrão</div>
          </div>
          <a href="admin/index.php"><i class='bx bx-log-in' id="log_out" ></i></a>
        </div>
     </li>
    </ul>
  </div>

  <section class="home-section">