import React, { useState } from 'react';
import { Container, Card, Button, Row, Col, Modal } from 'react-bootstrap';

const projects = [
  {
    title: 'My Favorite Movies',
    description: 'Description of project one.',
    details: 'Detailed description of project one.',
    link: '#'
  },
  {
    title: 'My Favorite Artists',
    description: 'Description of project two.',
    details: 'Detailed description of project two.',
    link: '#'
  },
  {
    title: 'Bank Loan Application',
    description: 'Description of project three.',
    details: 'Detailed description of project three.',
    link: '#'
  },
];

const Projects = () => {
  const [show, setShow] = useState(false);
  const [selectedProject, setSelectedProject] = useState({});

  const handleClose = () => setShow(false);
  const handleShow = (project) => {
    setSelectedProject(project);
    setShow(true);
  };

  return (
    <Container className="mt-4">
      <h2>Projects</h2>
      <Row>
        {projects.map((project, index) => (
          <Col key={index} md={4} className="mb-4">
            <Card bg="light" text="dark">
              <Card.Body>
                <Card.Title>{project.title}</Card.Title>
                <Card.Text>{project.description}</Card.Text>
                <Button variant="primary" onClick={() => handleShow(project)}>View Project</Button>
              </Card.Body>
            </Card>
          </Col>
        ))}
      </Row>

      <Modal show={show} onHide={handleClose}>
        <Modal.Header closeButton>
          <Modal.Title>{selectedProject.title}</Modal.Title>
        </Modal.Header>
        <Modal.Body>{selectedProject.details}</Modal.Body>
        <Modal.Footer>
          <Button variant="secondary" onClick={handleClose}>
            Close
          </Button>
          <Button variant="primary" href={selectedProject.link}>
            Go to Project
          </Button>
        </Modal.Footer>
      </Modal>
    </Container>
  );
};

export default Projects;
