abstract class animal{
    void display()
    {
        System.out.printf("im a animal\n");
        
    }
    abstract void sound ();
}
class dog extends animal
{
  
    void sound()
    {
        System.out.printf("im a dog sound\n");
    }
    void show()
    {
        System.out.printf("ima dog class\n");
    }
}
public class main
{
    public static void main(String args[])
    {
       // animal d=new animal(); thropughs an error
       dog d=new dog();
       d.show();
        d.display();
        d.sound();
    }
}
