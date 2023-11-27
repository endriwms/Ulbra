import { Container, NavLinks } from './styles';
import { Link } from 'react-router-dom';

import logo from '../../assets/img/logo.svg';

export default function Header() {
  return (
    <Container>
      <img src={logo} alt="header" width="100" />

      <NavLinks>
        <Link to="/">HOME</Link>
        <Link to="/products">PRODUTOS</Link>
        <Link to="/contact">CONTATO</Link>
      </NavLinks>
    </Container>
  );
}
