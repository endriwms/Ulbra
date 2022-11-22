<h1>Listagem Clientes</h1>
<table class="table table-striped">
    <tr>
        <th>Id do Produto</th>
        <th>Nome</th>
        <th>Preço</th>
        <th>Descrição</th>
        <th>Categoria</th>
    </tr>



    <?php
    foreach ($arrayProducts as $product) {  
    ?>

        <tr>
            <td>
                <?= $product ['idProduct']?>
            </td>
            <td>
                <?= $product ['name']?>
            </td>
            <td>
                <?=  $product ['price']?>
            </td>
            <td>
                <?=  $product ['description']?>
            </td>
            <td>
                <?=  $product ['idCategory']?>
            </td>
        </tr>

    <?php
    }
    ?>

</table>