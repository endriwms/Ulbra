
  <table>
    <div class="text">Listagem de Clientes</div>
    <thead>
      <tr>
        <th scope="col">ID do Cliente</th>
        <th scope="col">Nome</th>
        <th scope="col">E-mail</th>
        <th scope="col">Telefone</th>
        <th scope="col">Endereço</th>
      </tr>
    </thead>

    <?php
      foreach($arrayClients as $client) {
    ?>

    <tbody>
      <tr>
        <td data-label="ID do Cliente"><?= $client['idClient']?></td>
        <td data-label="Nome"><?= $client['name']?></td>
        <td data-label="E-mail"><?= $client['email']?></td>
        <td data-label="Telefone"><?= $client['phone']?></td>
        <td data-label="Endereço"><?= $client['address']?></td>
      </tr>
    </tbody>
    
    <?php
      }
    ?>
  </table>

