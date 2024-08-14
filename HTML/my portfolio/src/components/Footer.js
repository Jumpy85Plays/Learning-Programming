import React from 'react';
import { Container } from 'react-bootstrap';

const Footer = () => {
  return (
    <footer className="bg-primary text-white mt-4">
      <Container className="text-center py-3">
        &copy; {new Date().getFullYear()} My Portfolio. All Rights Reserved.
      </Container>
    </footer>
  );
};

export default Footer;
