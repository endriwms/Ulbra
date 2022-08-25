<h4>Cadastro de Cliente</h4>

<form action="?controller=client&action=registerView" method="post">
  <div class="container">
    <div class="row">
      <div class="col-md-3">
        <span class="mb-2">
          <div class="mb-2 mt-2">
            <input class="form-control" type="text" name="name" placeholder="Nome">
          </div>
    
          <div class="">
            <input class="form-control" type="text" name="email" placeholder="Email">
          </div>
        </span>

        <!-- Form Radio -->
        <span class="p-2">
        <p>Qual genero você se identifica</p>
          <div class="form-check">
            <input class="form-check-input" type="radio" name="masculino" checked>
            <label class="form-check-label">Masculino</label>
          </div>
  
          <div class="form-check">
            <input class="form-check-input" type="radio" name="feminino">
            <label class="form-check-label">Feminino</label>
          </div>
  
          <div class="form-check">
            <input class="form-check-input" type="radio" name="outro">
            <label class="form-check-label">Outro</label>
          </div>
        </span>
      </div>

      <div class="col-md-3">
        <!-- Form Check -->
        <span>
          <p>Quais cores você não gosta?</p>
          <div class="form-check">
            <input class="form-check-input" type="checkbox" name="color">
            <label class="form-check-label">Azul</label>
          </div>
  
          <div class="form-check">
            <input class="form-check-input" type="checkbox" name="color">
            <label class="form-check-label">Vermelho</label>
          </div>
  
          <div class="form-check">
            <input class="form-check-input" type="checkbox" name="color">
            <label class="form-check-label">Verde</label>
          </div>
        </span>
      </div>
    </div>
  </div>

    <button class="m-3 tn btn-primary" type="submit">Enviar</button>
</form>