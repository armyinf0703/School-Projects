
public class QuartsToGallons_Tyler_Johnston { // My public class matching my save file name
    public static void main(String[] args) { 
    final int QUARTS_TO_GALLONS = 4; //My constant saying "4" quarts to a gallon
    int quartsNeededforPaintJob = 22; // Part A of the excersize asked to use an example number, I chose 22
    int gallons = 0; // declaring a variable I will use later for doing my math, this is for getting gallons, its int because I want to use the modulus for quarts
    int quarts = 0; // declaring a variable I will use later for doing my math, this is int because I am using a whole number vs decimal

    gallons = (quartsNeededforPaintJob / QUARTS_TO_GALLONS); // taking 1 and dividing by 4 to get my gallons
    quarts =  (quartsNeededforPaintJob % QUARTS_TO_GALLONS); // taking 1 and getting the remainder by using modulus
        // Line 12 Comment: I tried to use a descriptive as possible output, breaking down the inital use quarts needed, then telling the user what that compares to in gallons and left over quarts.
    System.out.println("You will use " + quartsNeededforPaintJob + " quarts for the job." + "That's " + gallons  + " gallons and " + quarts + " quarts.");
    }
}
