import { useEffect, useState } from 'react';
import { Link } from 'react-router-dom';
import { Container, ProductCard, ProductInfo } from './styles'

function Products() {
  const [products, setProducts] = useState([]);

  useEffect(() => {
    async function getProducts() {
      try {
        const response = await fetch('http://localhost:3001/products');
        if (!response.ok) {
          throw new Error('Error fetching products');
        }

        const data = await response.json();
        setProducts(data);
      } catch (error) {
        console.error('Error fetching products:', error);
      }
    }

    getProducts();
  }, []);

  return (
    <Container>
      {products.map(product => (
        <ProductCard key={product.id}>
          <img src={product.img} alt={product.name} height="300" />

          <ProductInfo>
            <h1>{product.name}</h1>
            <p>{product.description}</p>
            <span>Price: ${product.price}</span>
            <Link to={`/product/${product.id}`}>
              Visualizar
            </Link>
          </ProductInfo>
        </ProductCard>
      ))}
    </Container>
  );
}

export default Products;
