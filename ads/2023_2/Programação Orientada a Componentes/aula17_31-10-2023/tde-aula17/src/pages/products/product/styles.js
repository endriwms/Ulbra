import styled from "styled-components";

export const Container = styled.div`
  width: 100%;
  padding: 52px;
  background: #fff;
  display: flex;
  flex-direction: column;
  border-radius: 15px;
  box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1);

  h1 {
    margin: 0;
  }
`;

export const ProductCard = styled.div`
  margin-top: 24px;
  display: flex;
  width: 100%;

  .product-image {
    flex: 1;
    margin-right: 20px;


    img {
      width: 100%;
      max-height: 400px; // Ajuste conforme necessário
      object-fit: cover;
      border-radius: 10px;
    }
  }

  .product-info {
    flex: 1;

    p {
      margin-bottom: 20px;
    }

    span {
      font-weight: bold;
    }
  }
`;
