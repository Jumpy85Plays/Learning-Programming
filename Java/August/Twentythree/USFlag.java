public class USFlag {
    public static void main(String[] args) {
        int rows = 9; // Number of rows in the flag
        int cols = 15; // Number of columns in the flag

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i < rows / 2) {
                    // Print stars in the blue rectangle
                    if (j < cols / 2) {
                        System.out.print("*");
                    } else {
                        System.out.print(" ");
                    }
                } else {
                    // Print red stripes
                    System.out.print("=");
                }
            }
            System.out.println();
        }
    }
}
