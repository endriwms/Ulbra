import propTypes from 'prop-types';

Card.propTypes = {
  name: propTypes.string.isRequired,
  role: propTypes.string.isRequired,
  imgSrc: propTypes.string.isRequired,
  isConfirmed: propTypes.bool,
};

function Card({ name, role, imgSrc, isConfirmed }) {
  return (
    <>
      <div className='w-56 h-56 bg-zinc-800 flex flex-col justify-center items-center p-6 rounded-xl text-white shadow-lg hover:scale-105 transition-all'>
        <img src={imgSrc} alt="" className='w-20 rounded-full' />
        <span>{ name }</span>
        <span>{ role }</span>
        <span>{ isConfirmed ? 'Confirmado' : 'Não confirmado' }</span>
      </div>
    </>
  )
}

export default Card
