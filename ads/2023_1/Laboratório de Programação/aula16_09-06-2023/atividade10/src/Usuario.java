class Usuario implements IPersistente {
  @Override
  public void salvar() {
    System.out.println("Usuário salvo no banco de dados.");
  }

  @Override
  public void atualizar() {
    System.out.println("Usuário atualizado no banco de dados.");
  }

  @Override
  public void deletar() {
    System.out.println("Usuário removido do banco de dados.");
  }

  @Override
  public void buscar() {
    System.out.println("Usuário encontrado no banco de dados.");
  }
}