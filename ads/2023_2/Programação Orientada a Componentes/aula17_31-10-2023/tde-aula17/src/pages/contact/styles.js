import styled from "styled-components";

export const Container = styled.div`
  width: 100%;
  height: 100%;
  margin-top: 300px;

  .form {
    background: #fff;
    padding: 16px;
    width: 300px;
    display: flex;
    flex-direction: column;
    background: #fff;
    border-radius: 10px;
    box-shadow: 0px 4px 18px rgba(0, 0, 0, 0.04);

    input {
      width: 100%;
      height: 20px;
      background: #bcbcbc;
      border: none;
      border-radius: 5px;
      box-shadow: 0px 4px 10px rgba(0, 0, 0, 0.04);
      outline: 0;
      padding: 0 16px;

      &::placeholder {
        color: #BCBCBC;
      }
    }
  }
`;
