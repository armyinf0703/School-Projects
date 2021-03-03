public class TestSandwhich {
    public static void main(String[] args){

        String myFavoriteBread;
        Sandwhich reubenSandwhich = new Sandwhich();

        reubenSandwhich.setBreadName("rye");

        reubenSandwhich.setIngredient1("cheese");
        reubenSandwhich.setIngredient2("sauerkraut");
        reubenSandwhich.setIngredient3("reuben");

        reubenSandwhich.setPrice(6.99);
        
        myFavoriteBread = reubenSandwhich.getBreadName();

        System.out.println("My favorite bread is " + myFavoriteBread);

        System.out.println("The ingredients are " + reubenSandwhich.getIngredient1() + ", " + reubenSandwhich.getIngredient2() + " and " + reubenSandwhich.getIngredient3());

        System.out.println("The price is $" + reubenSandwhich.getPrice());

    }
    
}
