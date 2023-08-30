import java.awt.Rectangle;

public class moveTester {

    public static void main(String[] args) {
        Rectangle box = new Rectangle(5, 10, 20, 30);
        // System.out.println(r.x);
        box.translate(15, 25);

        // print information about the moved rectangle
        System.out.println("X: ");
        System.out.println(box.getX());
        System.out.println("Expected: 20");

        System.out.println("y: ");
        System.out.println(box.getY());
        System.out.println("Expected: 35");
    }
}
