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
      <div className='w-56 h-56 bg-zinc-800 flex flex-col justify-between items-center p-6 rounded-xl text-white shadow-lg hover:scale-105 transition-all'>
        <img
          src={imgSrc}
          alt=""
          className='w-20 rounded-full' />
        <span>{name}</span>
        <div className='flex flex-col items-center'>
          <span className='text-zinc-500'>{ role }</span>
          <span className={isConfirmed ? 'text-emerald-600' : 'text-red-600'}>
            {isConfirmed ? 'Confirmado' : 'Não confirmado'}
          </span>
        </div>
      </div>
    </>
  )
}

export default Card
