// Define the interface
interface Animal {
    void sound();  // method signature
}

// Implementing the interface in different classes
class Dog implements Animal {
    public void sound() {
        System.out.println("Woof!");
    }
}

class Cat implements Animal {
    public void sound() {
        System.out.println("Meow!");
    }
}

class Cow implements Animal {
    public void sound() {
        System.out.println("Moo!");
    }
}

// Main class to test dynamic binding
public class Main {
    public static void main(String[] args) {
        // Creating a reference of Animal type
        Animal myAnimal;

        // Assigning different subclasses to the same reference
        myAnimal = new Dog();
        myAnimal.sound();  // Outputs: Woof!

        myAnimal = new Cat();
        myAnimal.sound();  // Outputs: Meow!

        myAnimal = new Cow();
        myAnimal.sound();  // Outputs: Moo!
    }
}
