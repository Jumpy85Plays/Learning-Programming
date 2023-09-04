import java.util.Scanner;

public class bankAccountTesterPersonal {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        bankAccount account = null;
        String accountName = "";

        while (true) {
            System.out.println("Banking Application");
            System.out.println("1. Create Account");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Check Balance");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter account name: ");
                    scanner.nextLine(); // Consume newline
                    accountName = scanner.nextLine();

                    System.out.print("Initial balance: ");
                    double initialBalance = scanner.nextDouble();
                    account = new bankAccount(initialBalance);
                    System.out.println("Account \"" + accountName + "\" created.");
                    break;

                case 2:
                    if (account != null) {
                        System.out.print("Deposit amount: ");
                        double depositAmount = scanner.nextDouble();
                        account.deposit(depositAmount);
                        System.out.println("Deposit successful.");
                    } else {
                        System.out.println("Create an account first.");
                    }
                    break;

                case 3:
                    if (account != null) {
                        System.out.print("Withdrawal amount: ");
                        double withdrawAmount = scanner.nextDouble();
                        account.withdraw(withdrawAmount);
                        System.out.println("Withdrawal successful.");
                    } else {
                        System.out.println("Create an account first.");
                    }
                    break;

                case 4:
                    if (account != null) {
                        System.out.println("Account \"" + accountName + "\" balance: " + account.getBalance());
                    } else {
                        System.out.println("Create an account first.");
                    }
                    break;

                case 5:
                    System.out.println("Exiting. Have a nice day!");
                    scanner.close();
                    System.exit(0);
                    break;

                default:
                    System.out.println("Invalid choice. Select again.");
                    break;
            }
        }
    }
}
