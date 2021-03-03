/*
Name: Tyler Johnston
Summary: Excersie 12B uses random inputs for the values and does a bit of maths
*/
public class ShowStudentTJ {
    public static void main(String[] args){

        Student student = new Student();
        double calcGPA = 0.0; //Variable for doing math of GPA
        student.setIdNumber(12345); // Seemed like an okay test student id

        student.setCreditHours(12); //Used 12 since thats a full time student
        student.setPointsEarned(42); // 42 points earned, so almost 4.0 but not quite

        calcGPA = (student.getPointsEarned() / student.getCreditHours()); // Maths, points divided by credit hours. 
        

        System.out.println("The Students ID is  " + student.getIdNumber());// reminding a student of their id

        System.out.println("Credit hours attempted was  " + student.getCreditHours() + " This means the student earned " + student.getPointsEarned() + " points."); // Nice print output of listed credits and points earned

        System.out.println("Their GPA was " + calcGPA);// displays our custom variable we did a tiny bit of maths for 

    }
    
}
