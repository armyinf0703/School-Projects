/*
Name: Tyler Johnston
Summary: Exercise 12A, setting up a custom student infomation to calculate GPA

*/
public class StudentTJ {
    private int idNumber; // breadName = "Wheat"
    private int creditHours; // Credit hours
    private double pointsEarned; // For Points Earned
    private double gpa; // For GPA


    public void setIdNumber(int idNumberN) {
        idNumber = idNumberN; // For inputing  students ID Number
    }
    public int getIdNumber() {
        return idNumber; // For printing student id
    }

    public void setCreditHours(int CreditHoursN) {
        creditHours = CreditHoursN; // For inputing credit hours
    }
    public void setPointsEarned(double PointsEarnedN) {
        pointsEarned = PointsEarnedN; // For inputing points earned
    }
    public int getCreditHours() {
        return creditHours; // For printing credit hours taken
    }
    public double getPointsEarned() {
        return pointsEarned; // For printing points earned
    }
    public void setGPA(double GpaN) {
        gpa = GpaN; // For inputing GPA
    }

    public double getGPA() {
     return gpa; // For printing GPA
    }
    
}
