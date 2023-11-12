import { Container } from './styles'

function Contact() {
  return (
    <Container>
      <form action="" className='form'>
        <label htmlFor="">Nome</label>
        <input type="text" />
        <label htmlFor="">Email</label>
        <input type="text" />
        <label htmlFor="">Telefone</label>
        <input type="text" />
        <label htmlFor="">Cidade</label>
        <input type="text" />
      </form>
    </Container>
  );
}

export default Contact;
