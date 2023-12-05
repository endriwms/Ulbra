import { Container, NewProductForm } from './styles';
import { useForm } from '../../../hooks/useForm';

export default function NewProduct() {
  const initialValues = {
    name: '',
    price: '',
    description: '',
    img: ''
  };

  const { values, handleChange, resetForm } = useForm(initialValues);

  async function handleProduct(event) {
    event.preventDefault();

    try {
      const response = await fetch('http://localhost:3000/products', {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json'
        },
        body: JSON.stringify({
          img: values.img,
          name: values.name,
          description: values.description,
          price: parseFloat(values.price)
        })
      });

      if (response.ok) {
        console.log('Produto adicionado com sucesso!');
        resetForm(); // Limpa os campos do formulário após o envio
      } else {
        console.error('Erro ao adicionar o produto');
      }
    } catch (error) {
      console.error('Erro ao adicionar o produto:', error);
    }
  }

  return (
    <Container>
      <h1>Novo Produto</h1>

      <NewProductForm onSubmit={handleProduct}>
        <div className="input-container">
          <input
            type="text"
            placeholder="Nome"
            name="name"
            value={values.name}
            onChange={handleChange}
            required
          />
          <input
            type="number"
            placeholder="Preço"
            name="price"
            value={values.price}
            onChange={handleChange}
            required
          />
          <input
            type="text"
            placeholder="Descrição"
            name="description"
            value={values.description}
            onChange={handleChange}
            required
          />
          <input
            type="text"
            placeholder="URL da Imagem"
            name="img"
            value={values.img}
            onChange={handleChange}
            required
          />
          <button type="submit">Enviar</button>
        </div>
      </NewProductForm>
    </Container>
  );
}
