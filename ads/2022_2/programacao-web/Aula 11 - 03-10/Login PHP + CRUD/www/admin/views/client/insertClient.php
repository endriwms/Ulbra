<div class="container">
    <div class="title">Cadastre-se</div>
    <div class="content">
      <form action="?controller=client&action=insertClientAction" method="post">
        <div class="user-details">
          <div class="input-box">
            <span class="details">Nome Completo</span>
            <input type="text" name="name" placeholder="Digite seu nome" required>
          </div>

          <div class="input-box">
            <span class="details">Username</span>
            <input type="text" name="username" placeholder="Digite seu username" required>
          </div>

          <div class="input-box">
            <span class="details">Email</span>
            <input type="text" name="email" placeholder="Digite seu email" required>
          </div>

          <div class="input-box">
            <span class="details">Telefone</span>
            <input type="text" name="phone" placeholder="Digite seu número" required>
          </div>
          
          <div class="input-box">
            <span class="details">Endereço</span>
            <input type="text" name="address" placeholder="Endereço" required>
          </div>

          <div class="input-box">
            <span class="details">Password</span>
            <input type="password" placeholder="Insira uma senha" required>
          </div>
        </div>

        <div class="button">
          <input type="submit" value="Register">
        </div>
      </form>
    </div>
  </div>