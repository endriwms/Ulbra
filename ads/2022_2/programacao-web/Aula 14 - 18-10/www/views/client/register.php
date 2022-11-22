<div class="container">
    <div class="title">Cadastre-se</div>
    <div class="content">
      <form action="?controller=client&action=registerView" method="post">
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
            <span class="details">Password</span>
            <input type="password" placeholder="Insira uma senha" required>
          </div>

          <div class="input-box">
            <span class="details">Confirm Password</span>
            <input type="password" placeholder="Confirme a senha" required>
          </div>
        </div>

        <div class="gender-details">
          <input type="radio" name="gender" value="Masculino" id="dot-1">
          <input type="radio" name="gender" value="Feminino" id="dot-2">
          <input type="radio" name="gender" value="Outro" id="dot-3">
          <span class="gender-title">Genero</span>

          <div class="category">
            <label for="dot-1">
              <span class="dot one"></span>
              <span class="gender">Masculino</span>
            </label>

            <label for="dot-2">
              <span class="dot two"></span>
              <span class="gender">Feminino</span>
            </label>

            <label for="dot-3">
              <span class="dot three"></span>
              <span class="gender">Outro</span>
            </label>
          </div>
        </div>

        <div class="button">
          <input type="submit" value="Register">
        </div>
      </form>
    </div>
  </div>