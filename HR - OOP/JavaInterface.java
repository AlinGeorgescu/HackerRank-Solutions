import java.util.Scanner;

interface AdvancedArithmetic {
    int divisorSum(int n);
}

class MyCalculator implements AdvancedArithmetic {
    @Override
    public int divisorSum(final int n) {
        if (n == 1) {
            return n;
        }

        int sum = n + 1;

        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                sum += i;
            }
        }

        return sum;
    }
}

public final class JavaInterface {
    private JavaInterface() {
    }

    /*
     *  ImplementedInterfaceNames method takes an object and prints the name of
     *  the interfaces it implemented.
     */
    private static void implementedInterfaceNames(final Object o) {
        Class[] theInterfaces = o.getClass().getInterfaces();
        for (Class theInterface : theInterfaces) {
            String interfaceName = theInterface.getName();
            System.out.println(interfaceName);
        }
    }

    public static void main(final String[] args) {
        MyCalculator myCalculator = new MyCalculator();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.print("I implemented: ");
        implementedInterfaceNames(myCalculator);
        System.out.print(myCalculator.divisorSum(n) + "\n");

        sc.close();
    }
}
