/*
Name: Tyler Johnston
Summary of Program: Calculates two Spa Services 
Current Date: 4 FEB 2021
*/
import java.util.Scanner;// Imports ability to use keyboard inputs

public class CreateSpaServices // File name via public class
{
    public static void main(String[] args) // First main method
    {
        String service;// String for Service
        double price; // double value for price.  
        SpaService firstService = new SpaService(); // First service for Spa
        SpaService secondService = new SpaService(); // Second Service for Spa
        Scanner keyboard = new Scanner(System.in); // Input scanner

        System.out.print("Enter service >> "); //Prompt for user input
        service = keyboard.nextLine();
        System.out.print("Enter price >> "); //Prompt for user input
        price = keyboard.nextDouble();

        firstService.setServiceDescription(service);

        firstService.setPrice(price);   

        keyboard.nextLine();
        System.out.print("Enter service >> "); //Prompt for user input
        service = keyboard.nextLine();
        System.out.print("Enter price >> "); //Prompt for user input
        price = keyboard.nextDouble();
        secondService.setServiceDescription(service);
        secondService.setPrice(price);       

        System.out.println("First service details:"); //Calculation for first service
        System.out.println(firstService.getServiceDescription() +
        " $" + firstService.getPrice());

        System.out.println("Second service details:"); //Calculation for second Service 
        System.out.println(secondService.getServiceDescription() +
        " $" + secondService.getPrice());
    }
}