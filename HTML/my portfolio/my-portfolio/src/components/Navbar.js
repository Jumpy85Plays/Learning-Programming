import React from 'react';
import { Navbar, Nav } from 'react-bootstrap';
import '../styles/Navbar.css'; // Import custom CSS for Navbar

const NavigationBar = () => {
  return (
    <Navbar bg="Navbar" variant="dark" fixed="top">
      <Navbar.Brand href="/">My Portfolio</Navbar.Brand>
      <Nav className="mr-auto">
        <Nav.Link href="/">Home</Nav.Link>
        <Nav.Link href="/about">About</Nav.Link>
        <Nav.Link href="/projects">Projects</Nav.Link>
        <Nav.Link href="/contact">Contact</Nav.Link>
      </Nav>
    </Navbar>
  );
};

export default NavigationBar;
