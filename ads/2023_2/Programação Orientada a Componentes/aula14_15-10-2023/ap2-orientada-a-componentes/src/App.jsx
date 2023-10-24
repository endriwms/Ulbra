import { useState } from 'react';
import './assets/css/App.css';
import Header from './components/Header';
import Welcome from './components/Welcome';
import Card from './components/Card';
import Form from './components/Form';

function App() {
  const [formData, setFormData] = useState([]);

  const addCard = (newData) => {
    setFormData([...formData, newData]);
  };

  return (
    <div className='min-h-screen flex flex-col justify-center items-center bg-zinc-700 space-y-4'>
      <Header />

      <Welcome name={'Endriw'} />

      <div className='w-full flex justify-around space-y-6'>
        <div className='w-1/2 flex flex-wrap gap-4'>
          {formData.map((data, index) => (
            <Card
              key={index}
              name={data.nome}
              role={data.egressoOuConvidado}
              isConfirmed={data.pago === 'sim'}
              imgSrc={data.foto}
            />
          ))}
        </div>
        <div className='w-1/4'>
          <Form addCard={addCard} />
        </div>
      </div>
    </div>
  );
}

export default App;
