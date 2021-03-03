/*
Name: Tyler Johnston
Summary: All the gets and sets / variable creation for my sandwhich
*/
public class SandwhichTJ {
    private String breadName; // breadName = "reuben"
    private String ingredient1;// I will list three ingredients, so I used 3 ingredient variables
    private String ingredient2;// I will list three ingredients, so I used 3 ingredient variables
    private String ingredient3;// I will list three ingredients, so I used 3 ingredient variables
    private double price;// Sadly things cost money

    public void setBreadName(String BreadN) {
        breadName = BreadN; //Setting up our breadname 
    }
    public String getBreadName() {
        return breadName;// For printing our bread type
    }

    public void setIngredient1(String IngredientN) {
        ingredient1 = IngredientN; // For inputing  the first ingredient listed
    }
    public void setIngredient2(String IngredientM) {
        ingredient2 = IngredientM;// For inputing the second ingredient listed
    }
    public void setIngredient3(String IngredientC) {
        ingredient3 = IngredientC; // For inputing the last ingredient listed
    }
    public String getIngredient1() {
        return ingredient1; // For printing the first ingredient listed
    }
    public String getIngredient2() {
        return ingredient2;// For printing the 2nd ingredient listed
    }
    public String getIngredient3() {
        return ingredient3;// For printing the last ingredient listed
    }
    public void setPrice(double PriceN) {
        price = PriceN; // For inputing our price
    }
    public double getPrice() {
     return price;// For printing our price
    }
    
}
