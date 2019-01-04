import java.util.ArrayList;
import java.util.Scanner;

class Student {
}

class Rockstar {
}

class Hacker {
}


public final class JavaInstanceof {
    private JavaInstanceof() {
    }

    private static String count(final ArrayList myList) {
        int a = 0;
        int b = 0;
        int c = 0;

        for (Object element : myList) {
            if (element instanceof Student) {
                ++a;
            } else if (element instanceof Rockstar) {
                ++b;
            } else if (element instanceof Hacker) {
                ++c;
            }
        }

        return a + " " + b + " " + c;
    }

    public static void main(final String[] args) {
        ArrayList myList = new ArrayList();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; ++i) {
            String s = sc.next();

            switch (s) {
                case "Student":
                    myList.add(new Student());
                    break;
                case "Rockstar":
                    myList.add(new Rockstar());
                    break;
                case "Hacker":
                    myList.add(new Hacker());
                    break;
                default:
                    break;
            }
        }

        System.out.println(count(myList));
    }
}
