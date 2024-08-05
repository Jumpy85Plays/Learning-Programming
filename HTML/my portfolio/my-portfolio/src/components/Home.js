import React from 'react';
import { Container, Row, Col, Card } from 'react-bootstrap';
import personalImage from '../images/personal.jpg';
import '../styles/Home.css'; // Import the CSS file

const Home = () => {
  return (
    <Container className="mt-4">
      <Row className="align-items-center">
        <Col md={6} className="text-center text-md-left">
          <img src={personalImage} alt="Personal" className="personal-image" />
        </Col>
        <Col md={6} className="text-center text-md-left">
          <h1>Welcome to My Portfolio</h1>
          <p>
            Hello! I'm Gabriel F. Aguilar, a 3rd Year Student currently earning my Degree in Bachelor of Science and Technology. This is my personal portfolio where I showcase my skills and projects.
          </p>
        </Col>
      </Row>
    </Container>
  );
};

export default Home;
