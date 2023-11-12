import { Routes as Router, Route } from 'react-router-dom';

import Home from './pages/home';
import Products from './pages/products';
import Contact from './pages/contact';

function Routes() {
  return (
    <Router>
      <Route path="/" element={<Home />} />
      <Route path="/products" element={<Products />} />
      <Route path="/contact" element={<Contact />} />
      {/* <Route path="/products" element={<Product />} /> */ }
    </Router>
  );
}

export default Routes;
