package Java.September.Four.Flag;

import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;

public class Flag extends JPanel {
    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        // Draw the flag background (blue rectangle)
        g2d.setColor(new Color(0, 0, 255)); // Dark blue
        g2d.fillRect(0, 0, getWidth(), getHeight());

        // Draw the flag background (red rectangle)
        g2d.setColor(new Color(255, 0, 0)); // Red
        g2d.fillRect(0, 0, getWidth(), getHeight());

        // Draw the sun (yellow circle)
        g2d.setColor(Color.YELLOW);
        Ellipse2D.Double sun = new Ellipse2D.Double(40, 40, 120, 120);
        g2d.fill(sun);

        // Draw the sun rays (white)
        g2d.setColor(Color.WHITE);
        double centerX = 100;
        double centerY = 100;
        double radius = 60;
        for (int i = 0; i < 8; i++) {
            double angle = Math.toRadians(45 * i);
            double startX = centerX + radius * Math.cos(angle);
            double startY = centerY - radius * Math.sin(angle);
            double endX = centerX + (radius + 20) * Math.cos(angle);
            double endY = centerY - (radius + 20) * Math.sin(angle);
            Line2D.Double ray = new Line2D.Double(startX, startY, endX, endY);
            g2d.draw(ray);
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Philippine Flag");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(200, 200);
        frame.add(new Flag());
        frame.setVisible(true);
    }
}
