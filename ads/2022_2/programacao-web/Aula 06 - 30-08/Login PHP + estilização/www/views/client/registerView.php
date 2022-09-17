<table>
  <div class="text">Cadastro feito</div>
  <thead>
    <tr>
      <th scope="col">Nome: </th>
      <th scope="col">Username: </th>
      <th scope="col">Email: </th>
      <th scope="col">Telefone: </th>
      <th scope="col">Gênero: </th>
    </tr>
  </thead>

  <tbody>
    <tr>
      <td data-label="Nome"><?= $arrayClient['name']?></td>
      <td data-label="Username"><?= $arrayClient['username']?></td>
      <td data-label="Email"><?= $arrayClient['email']?></td>
      <td data-label="Telefone"><?= $arrayClient['telefone']?></td>
      <td data-label="Genero"><?= $arrayClient['gender']?></td>
    </tr>
  </tbody>
</table>