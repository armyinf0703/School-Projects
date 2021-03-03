import java.util.Scanner;
public class Eggs {

    public static void main(String[] args) {
        final double PRICE_PER_DOZEN_EGGS = 3.25;
        final double PRICE_PER_EGG = 0.45;
        double totalPrice = 0.0;
        int numberofLooseEggs = 0;
        int numberOfEggs = 0;
        int dozens = 0;
        Scanner keyboard = new Scanner(System.in);

        System.out.println("Enter number of eggs you bought?");

        numberOfEggs = keyboard.nextInt();
        dozens = numberOfEggs / 12;
        numberofLooseEggs = numberOfEggs % 12;
        totalPrice = (PRICE_PER_DOZEN_EGGS * dozens) + (PRICE_PER_EGG * numberofLooseEggs);
        System.out.println("You ordered " + numberOfEggs + "." + "That's " + numberOfDozens + " dozen at " + PRICE_PER_DOZEN_EGGS + " per dozen and " + numberOfLooseEggs + " loose eggs at " + PRICE_PER_EGG + " cents each for a total of $" + totalPrice + ".");

    }
    
}
