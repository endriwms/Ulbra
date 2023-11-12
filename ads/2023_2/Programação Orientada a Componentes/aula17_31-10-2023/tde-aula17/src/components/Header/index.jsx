import { Container, NavBar } from './styles';
import { Link } from 'react-router-dom';

import logo from '../../assets/img/react.svg';

export default function Header() {
  return (
    <Container>
      <img src={logo} alt="header" width="60" />
      <NavBar>
        <ul>
          <li><Link to="/">HOME</Link></li>
          <li><Link to="/products">PRODUTOS</Link></li>
          <li><Link to="/contact">CONTATO</Link></li>
        </ul>
      </NavBar>
    </Container>
  );
}
