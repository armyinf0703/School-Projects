import java.util.Scanner;// importing scanner for using inputs
public class TicketNumber_Tyler_Johnston { //File name class 

    public static void main(String[] args)  { 
            Scanner keyboard = new Scanner(System.in); // setting up to use keyboard inputs
            long ticketCheck1; // using a long number for calculating ticket validation
            long ticketCheck2;// using a long number for calculating ticket validation
            long finalTicket; // using a long number for calculating ticket validation
            boolean flag1 = true; // using a long number for calculating ticket validation
            boolean flag2 = false;// using a long number for calculating ticket validation
            String ticketNumber;// using a string for first part, I attempted to use a long to start, but it had issues compiling.
            
            System.out.print("Please enter your 6 digit ticket number: "); // Descriptive text saying I need a 6 digit number
            ticketNumber=keyboard.next();// Getting my user input into program
            long ticketInput =Long.parseLong(ticketNumber);// Changing my string ticketnumber to a long number.

            ticketCheck1 = (ticketInput%10);// TicketCheck1 is setup to take the ticketinput and figure out the remainder when its %10 
            ticketCheck2 = (ticketInput/10);// TicketCheck2 calculates the last digit
            finalTicket = (ticketCheck2%7); // Taking the remainder of my ticketCheck and dividing by 7
    
            if(ticketCheck1==finalTicket) // checking if ticketCheck1 math works with finalTicket
            {
                System.out.print(ticketNumber + " Is a "+flag1+ " ticket number");// first statement for when it comes back true.
            }
            else// else statement for saying its false
            {
                System.out.print(ticketNumber + " Is a "+flag2+ " ticket number");  // Output for saying the number is false and invalid          
            }
        }
    }
        
