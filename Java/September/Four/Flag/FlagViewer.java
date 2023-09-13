package Java.September.Four.Flag;

import javax.swing.JFrame;

public class FlagViewer {

    public static void main(String[] args) {
        JFrame frame = new JFrame("Philippine Flag");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(200, 200);
        frame.add(new Flag());
        frame.setVisible(true);
    }
}
