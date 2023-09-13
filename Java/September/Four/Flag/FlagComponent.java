package Java.September.Four.Flag;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;

import javax.swing.JComponent;

public class FlagComponent extends JComponent {
    public void paintComponent(Graphics g) {
        Graphics2D g2 = (Graphics2D) g;

        // Draw the flag background (blue rectangle)
        g2.setColor(new Color(12, 56, 143)); // Dark blue
        g2.fillRect(0, 0, getWidth(), getHeight());

        // Draw the sun (yellow circle)
        g2.setColor(Color.YELLOW);
        Ellipse2D.Double sun = new Ellipse2D.Double(40, 40, 120, 120);
        g2.fill(sun);

        // Draw the sun rays (white)
        g2.setColor(Color.WHITE);
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
            g2.draw(ray);
        }
    }
}
