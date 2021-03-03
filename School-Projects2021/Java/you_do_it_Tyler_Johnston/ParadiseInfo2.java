/*
Name: Tyler Johnston
Summary of Program: ParadiseInfo2 for handling a discount information
Current Date: 4 FEB 2021
*/
import java.util.Scanner;
public class ParadiseInfo2 {
    public static void main(String[] args)
    {
        double price; // double variable
        double discount; // double variable
        double savings; // double variable 

        Scanner keyboard = new Scanner(System.in); // Scanner saying we will use keyboard

        System.out.print("Enter cutoff price for discount >> "); // user input
        price = keyboard.nextDouble();

        System.out.print("Enter discount rate as a whole number >> "); // user input
        discount = keyboard.nextDouble();
        displayInfo();
        savings = computeDiscountInfo(price, discount);

        System.out.println("Special this week on any service over " + 
        price); // Calculation 
        System.out.println("Discount of " + discount + " percent"); // Calculation  
        System.out.println("That’s a savings of at least $" + savings);




    }
    public static void displayInfo()
    {
    System.out.println("Paradise Day Spa wants to pamper you.");
    System.out.println("We will make you look good.");
    }
    public static double computeDiscountInfo(double pr, double dscnt)
    {
    double savings; // Calculation 
    savings = pr * dscnt / 100; // Calculation 
    return savings;// Calculation 
    }
}