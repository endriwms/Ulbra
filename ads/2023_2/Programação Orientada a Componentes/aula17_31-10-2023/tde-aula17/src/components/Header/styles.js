import styled from 'styled-components';

export const Container = styled.nav`
  display: flex;
  justify-content: space-between;
  align-items: center;
  background: #000;
  padding: 1.5rem 12rem;
  position: relative;
`;

export const NavLinks = styled.div`
  a {
    color: #fff;
    text-decoration: none;
    margin-left: 12px;
    font-size: 18px;
    font-weight: 500;
    transition: all 0.2s ease-in;

    &:hover {
      color: #e67e22;
    }
  }
`;
