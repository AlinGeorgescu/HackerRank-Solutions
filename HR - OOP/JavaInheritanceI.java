class Animal {
	void walk() {
		System.out.println("I am walking");
	}
}

final class Bird extends Animal {
	void fly() {
		System.out.println("I am flying");
	}

    void sing() {
        System.out.println("I am singing");
    }
}

public class JavaInheritanceI {
	private JavaInheritanceI() {
	}

	public static void main(final String args[]) {
		Bird bird = new Bird();
		bird.walk();
		bird.fly();
		bird.sing();
	}
}
