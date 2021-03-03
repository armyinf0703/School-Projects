/*
Name: Tyler Johnston
Summary of Program: For use in the CreateSpaServices File
Current Date: 4 FEB 2021
*/
public class SpaService
{
    private String serviceDescription; // creating private string
    private double price; // Creating private  double
    public void setServiceDescription(String service) // Service desription
    {
        serviceDescription = service;
    }
    public void setPrice(double pr) // Pricing
    {
        price = pr;
    }
    public String getServiceDescription()
    {
        return serviceDescription;
    }
    public double getPrice()
    {
        return price;
    }
}