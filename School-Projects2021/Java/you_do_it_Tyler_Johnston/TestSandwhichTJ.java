/*
Name: Tyler Johnston
Summary: Sandwhich file which inputs all my gets and sets to build a reuben sandwhich
*/
public class TestSandwhichTJ {
    public static void main(String[] args){

        String myFavoriteBread;
        Sandwhich reubenSandwhich = new Sandwhich();// I Built a reuben because can't go wrong with a good reuben

        reubenSandwhich.setBreadName("rye"); // The only bread you can use period.

        reubenSandwhich.setIngredient1("cheese"); // Three core ingredients needed for a good reuben
        reubenSandwhich.setIngredient2("sauerkraut");// Three core ingredients needed for a good reuben
        reubenSandwhich.setIngredient3("reuben");// Three core ingredients needed for a good reuben 

        reubenSandwhich.setPrice(6.99);
        
        myFavoriteBread = reubenSandwhich.getBreadName();

        System.out.println("The Only bread for a good reuben is " + myFavoriteBread);// displaying bread type

        System.out.println("The ingredients are " + reubenSandwhich.getIngredient1() + ", " + reubenSandwhich.getIngredient2() + " and " + reubenSandwhich.getIngredient3()); // Could have used a list? But this seemed okay

        System.out.println("The price is $" + reubenSandwhich.getPrice()); // Reubens are decent priced for sure! Especially from Winchells. 

    }
    
}
