import React from 'react';
import { Container, Row, Col } from 'react-bootstrap';
import personalImage from '../images/personal.jpg'; // Adjust the path as needed
import '../styles/Home.css'; // Import the CSS file

const Home = () => {
  return (
    <Container className="home-container mt-5">
      <Row className="align-items-center">
        <Col md={6}>
          <img src={personalImage} alt="Gabriel F. Aguilar" className="personal-image" />
        </Col>
        <Col md={6}>
          <h1>Hello! I'm Gabriel F. Aguilar</h1>
          <p>
            A 3rd Year Student currently earning my Degree in Bachelor of Science and Technology. 
            This is my personal portfolio where I showcase my skills and projects.
          </p>
        </Col>
      </Row>
    </Container>
  );
};

export default Home;

