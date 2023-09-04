public class counterProgram {
    private int count;

    public counterProgram() {
        count = 0;
    }

    public void increment() {
        count++;
    }

    public void decrement() {
        if (count > 0) {
            count--;
        }
    }

    public int getCount() {
        return count;
    }

    public void reset() {
        count = 0;
    }

    public static void main(String[] args) {
        counterProgram tallyCounter = new counterProgram();

        // Increase the count 5 times
        for (int i = 0; i < 5; i++) {
            tallyCounter.increment();
        }

        // Show the current count
        System.out.println("Count now: " + tallyCounter.getCount());

        // Decrease the count 2 times
        tallyCounter.decrement();
        tallyCounter.decrement();

        // Show the current count
        System.out.println("Count now: " + tallyCounter.getCount());

        // Reset the count
        tallyCounter.reset();

        // Show the count after resetting
        System.out.println("Count after reset: " + tallyCounter.getCount());
    }
}
