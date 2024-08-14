// src/components/Projects.js

import React, { useState } from 'react';
import { Container, Row, Col, Button, Modal } from 'react-bootstrap';
import project1 from '../images/project1-preview.png';
import project2 from '../images/project2-preview.png';
import project3 from '../images/project3-preview.png';
import '../styles/Projects.css'; // Adjusted import path

const projectData = [
  {
    id: 1,
    title: 'My Favorite Movies',
    image: project1,
    description: 'In this project, our professor tasked us with making a basic "Favorite Movies" website that uses html, css, and bootstrap'
  },
  {
    id: 2,
    title: 'My Favorite Artists',
    image: project2,
    description: 'In this project, our professor tasked us with making a website that is interconnected with each part that also links the user to the songs of the artists that we featured in the website.'
  },
  {
    id: 3,
    title: 'Bank Loan Application Form',
    image: project3,
    description: 'In this project, our professor tasked us with making a basic "Bank Loan Application Form" that is essentially fully working just without the systems that it should be connected to along with a "Terms and Conditions".'
  }
];

const Projects = () => {
  const [showModal, setShowModal] = useState(false);
  const [currentProject, setCurrentProject] = useState(null);

  const handleShow = (project) => {
    setCurrentProject(project);
    setShowModal(true);
  };

  const handleClose = () => {
    setShowModal(false);
    setCurrentProject(null);
  };

  return (
    <Container className="project-container">
      <Row>
        {projectData.map((project) => (
          <Col md={4} key={project.id} className="mb-4">
            <div className="project-card">
              <img
                src={project.image}
                alt={project.title}
                className="project-image preview-image"
              />
              <h3>{project.title}</h3>
              <Button variant="primary" onClick={() => handleShow(project)}>
                View Project
              </Button>
            </div>
          </Col>
        ))}
      </Row>

      {currentProject && (
        <Modal show={showModal} onHide={handleClose} size="lg">
          <Modal.Header closeButton>
            <Modal.Title>{currentProject.title}</Modal.Title>
          </Modal.Header>
          <Modal.Body>
            <img
              src={currentProject.image}
              alt={currentProject.title}
              className="project-image full-image"
            />
            <p>{currentProject.description}</p>
          </Modal.Body>
        </Modal>
      )}
    </Container>
  );
};

export default Projects;