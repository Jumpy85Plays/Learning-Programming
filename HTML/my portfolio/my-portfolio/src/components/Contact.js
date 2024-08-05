import React, { useState } from 'react';
import { Container, Form, Button } from 'react-bootstrap';
import emailjs from 'emailjs-com';

const Contact = () => {
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    message: ''
  });

  const handleChange = (e) => {
    const { name, value } = e.target;
    setFormData({
      ...formData,
      [name]: value
    });
  };

  const handleSubmit = (e) => {
    e.preventDefault();

    emailjs.send(
      'service_6t8jjgv',
      'template_lndcisx',
      formData,
      'lLP3oCW5xlg_VDgb0'
    )
    .then((response) => {
      console.log('SUCCESS!', response.status, response.text);
      alert('Message sent successfully!');
      setFormData({ name: '', email: '', message: '' }); // Clear the form
    }, (error) => {
      console.log('FAILED...', error);
      alert('Failed to send the message, please try again later.');
    });
  };

  return (
    <Container className="mt-4">
      <h2>Contact Me</h2>
      <Form onSubmit={handleSubmit}>
        <Form.Group controlId="formName">
          <Form.Label>Name</Form.Label>
          <Form.Control 
            type="text" 
            name="name" 
            value={formData.name} 
            onChange={handleChange} 
            placeholder="Enter your name" 
            required 
          />
        </Form.Group>
        <Form.Group controlId="formEmail">
          <Form.Label>Email address</Form.Label>
          <Form.Control 
            type="email" 
            name="email" 
            value={formData.email} 
            onChange={handleChange} 
            placeholder="Enter your email" 
            required 
          />
        </Form.Group>
        <Form.Group controlId="formMessage">
          <Form.Label>Message</Form.Label>
          <Form.Control 
            as="textarea" 
            name="message" 
            value={formData.message} 
            onChange={handleChange} 
            rows={3} 
            placeholder="Enter your message" 
            required 
          />
        </Form.Group>
        <Button variant="primary" type="submit">
          Submit
        </Button>
      </Form>
    </Container>
  );
};

export default Contact;
