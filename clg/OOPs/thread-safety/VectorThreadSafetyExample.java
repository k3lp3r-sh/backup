import java.util.Vector;

public class VectorThreadSafetyExample {
    // Shared vector
    private static Vector<Integer> sharedVector = new Vector<>();

    public static void main(String[] args) {
        // Create two threads to modify the shared vector
        Thread thread1 = new Thread(new VectorModifier("Thread 1"));
        Thread thread2 = new Thread(new VectorModifier("Thread 2"));

        // Start the threads
        thread1.start();
        thread2.start();
    }

    // Runnable class to modify the shared vector
    static class VectorModifier implements Runnable {
        private String threadName;

        VectorModifier(String name) {
            this.threadName = name;
        }

        @Override
        public void run() {
            for (int i = 0; i < 5; i++) {
                // Adding an element to the shared vector
                sharedVector.add(i);

                // Display the current state of the vector
                System.out.println(threadName + ": Vector content: " + sharedVector);

                // Simulate some other processing in the thread
                try {
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}

