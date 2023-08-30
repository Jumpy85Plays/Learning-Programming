
//import java.io.PrintStream;
//import java.awt.Rectangle;
import java.io.*;

public class VariableTest {

    public static void main(String[] args) {
        String greeting = ("Hello World!");
        PrintStream printer = System.out;
        int width = 31;
        int n = greeting.length();
        String river = "Mississippi";
        String bigRiver = river.toUpperCase();
        printer.println(bigRiver);
        String newRiver = river.replace("issippi", "our");
        int o = newRiver.length();
        printer.println(greeting);
        printer.println(newRiver);
        printer.println(o);
        printer.println(width);
        printer.println(n);
        // Rectangle box = new Rectangle(5, 10, 15, 20);
        // System.out.println(box);
    }
}
