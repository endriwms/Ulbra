import styled from 'styled-components';

export const Container = styled.header`
  width: 100%;
  padding: 12px 74px;
  position: fixed;
  display: flex;
  justify-content: space-between;
  background: #1f1f1f;
  top: 0;
  left: 0;
`;

export const NavBar = styled.nav`
  display: flex;
  align-items: center;
  margin-left: 74px;

  ul {
    display: flex;
    list-style: none;
    gap: 12px;
    justify-content: space-between;

    a {
      color: #fff;
      font-size: 16px;
      font-weight: bold;
      text-decoration: none;
      transition: all 0.2s;
    }
    a:hover {
      color: #fabf1b;
    }
  }
`;
