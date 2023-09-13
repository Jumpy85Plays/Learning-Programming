package Java.September.Eleven.CashRegister;

import javax.swing.JOptionPane;

/**
 * CashRegisterSimulator is a simple program that helps users simulate
 * a purchase transaction and calculate their change using a GUI.
 */
public class CashRegisterSimulatorGUI {
    public static void main(String[] args) {
        CashRegister register = new CashRegister();

        // Ask the user to input the price using a GUI dialog
        String priceInput = JOptionPane.showInputDialog("Enter the item price:");
        double price = Double.parseDouble(priceInput);
        register.recordPurchase(price);

        // Ask the user to input the payment details using GUI dialogs
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

        // Record the user's payment
        register.enterPayment(dollars, quarters, dimes, nickels, pennies);

        // Calculate the change
        double change = register.giveChange();

        // Display the change to the user using a GUI dialog
        JOptionPane.showMessageDialog(null, "Your change is: $" + change);

        // Exit the program gracefully
        System.exit(0);
    }
}
