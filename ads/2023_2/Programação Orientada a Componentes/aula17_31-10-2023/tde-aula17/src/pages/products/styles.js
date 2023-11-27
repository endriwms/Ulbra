import styled from "styled-components";

export const Container = styled.div`
  width: 100%;
  display: flex;
  justify-content: center;
  align-items: center;
`;

export const ProductCard = styled.div`
  display: flex;
  flex-direction: column;
  width: 300px;
  background: #090808;
  color: #fff;
  border-radius: 10px;

  h1 {
    margin: 0;
  }

  & + & {
    margin-left: 24px;
  }

  a {
    display: flex;
    justify-content: center;
    align-items: center;
    text-decoration: none;
    background: #fff;
    margin-top: 24px;
    padding: 8px;
    width: 100px;
  }
`;

export const ProductInfo = styled.div`
  margin: 16px 24px;
`;
