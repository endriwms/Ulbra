import styled from "styled-components";

export const Container = styled.div`
  width: 100%;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;

  a {
    background: #000;
    text-decoration: none;
    color: #fff;
    padding: 10px 16px;
    justify-content: end;
    border-radius: 5px;
    transition: opacity 0.2s;

    &:hover {
      opacity: 0.8;
    }
  }
`;

export const CardList = styled.div`
  max-width: 800x;
  width: 100%;
  display: flex;
  justify-content: center;
  flex-wrap: wrap;
  margin-top: 24px;
`;

export const ProductCard = styled.div`
  display: flex;
  flex-direction: column;
  width: 300px;
  background: #090808;
  color: #fff;
  border-radius: 10px;
  margin-top: 24px;

  h1 {
    margin: 0;
  }

  a {
    display: flex;
    justify-content: center;
    align-items: center;
    text-decoration: none;
    background: #fff;
    margin-top: 24px;
    color: #000;
    padding: 8px;
    width: 100px;
  }

  & + & {
    margin-left: 24px;
  }
`;

export const ProductInfo = styled.div`
  margin: 16px 24px;
`;

// export const AddProductButton = styled.a`
//   display: block;
//   text-decoration: none;
//   background: #fff;
//   color: #000;
//   margin-top: 24px;
//   padding: 8px 16px;
//   border: 1px solid #000;
//   border-radius: 5px;
//   width: fit-content;
// `;
