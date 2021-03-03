package DebuggingExercises;
import java.util.Scanner;
public class QuartsToGallonsInteractive_Tyler_Johnston {
    public static void main(String[] args) { 
        Scanner keyboard = new Scanner(System.in);

        final int QUARTS_TO_GALLONS = 4; //My constant saying "4" quarts to a gallon
        int quartsNeededforPaintJob = 0; // Declaring a variable I will use when I get my user input in a later porition of this program.
        int gallons = 0; // declaring a variable I will use later for doing my math, this is for getting gallons, its int because I want to use the modulus for quarts
        int quarts = 0; // declaring a variable I will use later for doing my math, this is int because I am using a whole number vs decimal


        System.out.println("Please enter the number of quarts needed to complete the paint job: ");// my user input for getting the paint needed
        quartsNeededforPaintJob = keyboard.nextInt(); //This tells the program to gather an input and what its for.

        gallons = (quartsNeededforPaintJob / QUARTS_TO_GALLONS); // taking 1 and dividing by 4 to get my gallons
        quarts =  (quartsNeededforPaintJob % QUARTS_TO_GALLONS); // taking 1 and getting the remainder by using modulus

        // Line 20 Comment: I tried to use a descriptive as possible output, breaking down the inital use quarts needed, then telling the user what that compares to in gallons and left over quarts.
        System.out.println("You will use " + quartsNeededforPaintJob + " quarts for the job." + "That's " + gallons  + " gallons and " + quarts + " quarts.");
        }   
}
