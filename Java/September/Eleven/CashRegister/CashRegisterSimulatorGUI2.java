package Java.September.Eleven.CashRegister;

import javax.swing.JOptionPane;
import java.text.DecimalFormat;

public class CashRegisterSimulatorGUI2 {
    public static void main(String[] args) {
        CashRegister register = new CashRegister();

        // Price input using a GUI dialog
        String priceInput = JOptionPane.showInputDialog("Enter the item price:");
        double price = Double.parseDouble(priceInput);
        register.recordPurchase(price);

        // Payment details using GUI dialogs
        String dollarsInput = JOptionPane.showInputDialog("Enter the number of dollars:");
        int dollars = Integer.parseInt(dollarsInput);

        String quartersInput = JOptionPane.showInputDialog("Enter the number of quarters:");
        int quarters = Integer.parseInt(quartersInput);

        String dimesInput = JOptionPane.showInputDialog("Enter the number of dimes:");
        int dimes = Integer.parseInt(dimesInput);

        String nickelsInput = JOptionPane.showInputDialog("Enter the number of nickels:");
        int nickels = Integer.parseInt(nickelsInput);

        String penniesInput = JOptionPane.showInputDialog("Enter the number of pennies:");
        int pennies = Integer.parseInt(penniesInput);

        // Record the User's payment
        register.enterPayment(dollars, quarters, dimes, nickels, pennies);

        // Calculate the change
        double change = register.giveChange();

        // Format the change to two decimal places
        DecimalFormat decimalFormat = new DecimalFormat("#.##");
        String formattedChange = decimalFormat.format(change);

        // Create a summary message
        String summaryMessage = "Item Price: $" + price + "\n" +
                "Payment Details: \n" +
                "Dollars: " + dollars + "\n" +
                "Quarters: " + quarters + "\n" +
                "Dimes: " + dimes + "\n" +
                "Nickels: " + nickels + "\n" +
                "Pennies: " + pennies + "\n" +
                "Your change is: $" + formattedChange;

        // Display the summary to the user using a GUI dialog
        JOptionPane.showMessageDialog(null, summaryMessage);

        // Exit the program gracefully
        System.exit(0);
    }
}
