package Java.September.Eleven.CashRegister;

import javax.swing.JOptionPane;

/**
 * This program simulates a purchase transaction where a user pays for an item
 * and gets their change, all using a friendly GUI.
 */
public class CashRegisterSimulator {
    public static void main(String[] args) {
        CashRegister register = new CashRegister();

        // Prompt the user to input the item price through a GUI dialog
        String priceInput = JOptionPane.showInputDialog("Enter the price of the item:");
        double price = Double.parseDouble(priceInput);
        register.recordPurchase(price);

        // Prompt the user to input payment details using GUI dialogs
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

        // Record the user's payment information
        register.enterPayment(dollars, quarters, dimes, nickels, pennies);

        // Calculate the change to be returned
        double change = register.giveChange();

        // Display the change to the user using a GUI dialog
        JOptionPane.showMessageDialog(null, "Your change is: $" + change);
    }
}
