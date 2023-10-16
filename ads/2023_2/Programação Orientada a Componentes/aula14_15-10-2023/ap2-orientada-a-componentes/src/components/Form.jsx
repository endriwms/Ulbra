import { useState } from 'react';

// eslint-disable-next-line react/prop-types
function Form({ addCard }) {
  const [formData, setFormData] = useState({
    nome: '',
    telefone: '',
    egressoOuConvidado: '',
    pago: '',
    foto: '',
  });

  const handleChange = (e) => {
    const { name, value } = e.target;
    setFormData({ ...formData, [name]: value });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    addCard(formData);
    setFormData({
      nome: '',
      telefone: '',
      egressoOuConvidado: '',
      pago: '',
      foto: '',
    });
  };

  return (
    <div className='bg-zinc-800 flex flex-col justify-center items-center p-6 rounded-xl text-white shadow-lg'>
      <form className='flex flex-col space-y-2' onSubmit={handleSubmit}>
        <div className='flex flex-col'>
          <label>Nome:</label>
          <input
            type="text"
            name="nome"
            placeholder="Digite o nome"
            value={formData.nome}
            onChange={handleChange}
            className='bg-transparent focus:outline-none'
          />
        </div>

        <div className='flex flex-col'>
          <label>Telefone:</label>
          <input
            type="text"
            name="telefone"
            placeholder="Digite o telefone"
            value={formData.telefone}
            onChange={handleChange}
            className='bg-transparent focus:outline-none'
          />
        </div>

        <div className='flex flex-col'>
          <label>Egresso ou Convidado:</label>
          <div className='flex items-center space-x-2'>
            <input
              type="radio"
              name="egressoOuConvidado"
              value="egresso"
              checked={formData.egressoOuConvidado === "egresso"}
              onChange={handleChange}
            />
            <label>Egresso</label>
            
            <input
              type="radio"
              name="egressoOuConvidado"
              value="convidado"
              checked={formData.egressoOuConvidado === "convidado"}
              onChange={handleChange}
            />
            <label>Convidado</label>
          </div>
        </div>

        <div className='flex flex-col'>
          <label>Pago:</label>
          <div className='flex space-x-2'>
            <input
              type="radio"
              name="pago"
              value="sim"
              checked={formData.pago === "sim"}
              onChange={handleChange}
            />
            <label>Sim</label>

            <input
              type="radio"
              name="pago"
              value="nao"
              checked={formData.pago === "nao"}
              onChange={handleChange}
            />
            <label>Não</label>
          </div>

        </div>

        <label>URL da Foto:</label>
        <input
          type="url"
          name="foto"
          placeholder="URL da imagem"
          value={formData.foto}
          onChange={handleChange}
          className='bg-transparent focus:outline-none'
        />

        <button type="submit">Adicionar Cartão</button>
      </form>
    </div>
  );
}

export default Form;
