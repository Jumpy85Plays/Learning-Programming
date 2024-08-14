import React from 'react';
import { Container } from 'react-bootstrap';
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome';
import { faFacebook } from '@fortawesome/free-brands-svg-icons';

const About = () => {
  return (
    <Container className="mt-4">
      <h2>About Me</h2>
      <p>
        I am a college student currently in my 3rd year pursuing a Bachelor of Science in Information Technology. I have studied programming and networking, and I am eager to prove my worth in this field.
      </p>

      {/* Facebook Button */}
      <a href="https://web.facebook.com/gabriel.aguilar.796774" target="_blank" rel="noopener noreferrer">
        <FontAwesomeIcon icon={faFacebook} size="2x" />
      </a>
    </Container>
  );
};

export default About;
