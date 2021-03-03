import java.util.Scanner;
public class First {

	public static void main(String[] args) 
	{
		
		Scanner keyboard = new Scanner(System.in);
		String school;
		int age;
		System.out.println("Hello World!!!");
		System.out.println("What's your school's name? ");
		school = keyboard.nextLine();
		System.out.println("School name: " + school + ".");
		System.out.println("How old are you? " );
		age = keyboard.nextInt();
		System.out.println("You are " + age);
    }
}
