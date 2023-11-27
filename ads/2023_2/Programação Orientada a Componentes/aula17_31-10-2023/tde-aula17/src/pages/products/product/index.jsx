import { useEffect, useState } from 'react';
import { useParams } from 'react-router-dom';
import { Container, ProductCard } from './styles';

function Product() {
  const { id } = useParams();
  const [product, setProduct] = useState(null);

  useEffect(() => {
    async function getProductById() {
      try {
        const response = await fetch(`http://localhost:3001/products/${id}`);
        if (!response.ok) {
          throw new Error('Failed to fetch product');
        }

        const data = await response.json();
        setProduct(data);
      } catch (error) {
        console.error('Error fetching product:', error);
      }
    }

    getProductById();
  }, [id]);

  if (!product) {
    return <p>Loading...</p>; // ou qualquer indicador de carregamento desejado
  }

  return (
    <Container>
      <ProductCard>
        <div className="product-image">
          <img src={product.img} alt={product.name} />
        </div>

        <div className="product-info">
          <h1>{product.name}</h1>
          <p>{product.description}</p>
          <span>Price: ${product.price}</span>
        </div>
      </ProductCard>
    </Container>
  );
}

export default Product;
