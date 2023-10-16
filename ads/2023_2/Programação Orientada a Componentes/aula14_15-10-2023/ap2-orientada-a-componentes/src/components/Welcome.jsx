import { useState } from 'react';
import PropTypes from 'prop-types';

Welcome.propTypes = {
  name: PropTypes.string.isRequired,
};

function Welcome({ name }) {
  const [cep, setCep] = useState(''); // Estado para armazenar o CEP
  const [address, setAddress] = useState({}); // Estado para armazenar os valores retornados

  const fetchViaCepData = () => {
    fetch(`https://viacep.com.br/ws/${cep}/json/`)
      .then((response) => response.json())
      .then((data) => setAddress(data))
      .catch((error) => console.error(error));
  };

  return (
    <div className='flex flex-col justify-center items-center text-white space-y-6'>
      <h1>Seja bem-vindo, <strong>{name}!</strong></h1>

      <button
        onClick={fetchViaCepData}
        className='bg-violet-600 px-4 py-2 rounded-xl'>
        Buscar CEP
      </button>

      <div className="flex flex-col justify-center items-center text-white">
        <input
          type="text"
          placeholder="Digite o CEP"
          value={cep}
          onChange={(e) => setCep(e.target.value)}
        />

        {address.cep && (
          <div>
            {address.logradouro && <p>Logradouro: {address.logradouro}</p>}
            {address.bairro && <p>Bairro: {address.bairro}</p>}
            {address.localidade && <p>Cidade: {address.localidade}</p>}
            {address.uf && <p>Estado: {address.uf}</p>}
          </div>
        )}
      </div>
    </div>
  );
}

export default Welcome;
