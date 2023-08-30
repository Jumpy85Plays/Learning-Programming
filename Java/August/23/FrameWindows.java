import javax.swing.*;
import java.awt.*;

public class FrameWindows {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setSize(300, 400);
        frame.setTitle("An Empty Frame");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create a button
        JButton button = new JButton("Click me!");

        // Set the layout manager to GridBagLayout
        frame.setLayout(new GridBagLayout());

        // Add the button to the frame
        frame.add(button);

        // Make the frame visible
        frame.setVisible(true);
    }
}