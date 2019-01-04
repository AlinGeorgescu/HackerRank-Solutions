class BiCycle {
    String defineMe() {
        return "a vehicle with pedals.";
    }
}

class MotorCycle extends BiCycle {
    MotorCycle() {
        System.out.println("Hello I am a motorcycle, I am " + defineMe());
        System.out.println("My ancestor is a cycle who is " + super.defineMe());
    }

    @Override
    String defineMe() {
        return "a cycle with an engine.";
    }
}

final class JavaMethodOverridingII {
    private JavaMethodOverridingII() {
    }

    public static void main(final String[] args) {
        MotorCycle m = new MotorCycle();
    }
}
