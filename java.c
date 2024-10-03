interface Animal {
    void sound();
}

class Dog implements Animal {
    public void sound() {
        System.out.println("Woof!");
    }
    
    public void fetch() {
        System.out.println("Fetching the ball!");
    }
}

public class Main {
    public static void main(String[] args) {
        // Using polymorphism
        Animal myDog = new Dog();
        myDog.sound(); // Outputs: Woof!
        // myDog.fetch(); // This would cause a compile-time error because fetch() is not in the Animal interface.

        // Using a specific type
        Dog d = new Dog();
        d.sound(); // Outputs: Woof!
        d.fetch(); // Outputs: Fetching the ball!
    }
}
