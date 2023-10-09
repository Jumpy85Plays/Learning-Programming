package Java.September.Thirteen.Earthquake;

import java.util.Scanner;

public class EarthquakeRunner {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter a magnitude on the Richter scale: ");
        double magnitude = in.nextDouble();
        Earthquake quake = new Earthquake(magnitude);
        in.close();
        System.out.println(quake.getDescription());

    }
}
