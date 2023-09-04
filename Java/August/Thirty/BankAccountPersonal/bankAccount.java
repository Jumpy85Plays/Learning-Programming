public class bankAccount {

    private double balance;

    public bankAccount() {
        balance = 0;
    }

    public bankAccount(double initialBalance) {
        balance = initialBalance;
    }

    public void deposit(double amount) {
        balance = balance + amount;
    }

    public void withdraw(double amount) {
        balance = balance - amount;
    }

    public double getBalance() {
        return balance;
    }
}
