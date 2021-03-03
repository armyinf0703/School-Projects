/*
Name: Tyler Johnston
Summary: Exercise 12c, Setting up for the provided exercise which gives me inputs to use. 

*/
public class ShowStudent2TJ {
    public static void main(String[] args){

        StudentTJ student = new StudentTJ();

        student.setIdNumber(9999); // Number given by the book

        student.setCreditHours(3); // Number given by the book
        student.setPointsEarned(12); // Number given by the book
        student.setGPA(4.0); // Number given by the book
        

        System.out.println("The Students ID is  " + student.getIdNumber()); // reminding the student of their id

        System.out.println("Credit hours completed was " + student.getCreditHours() + " The student earned " + student.getPointsEarned() + " points."); // Nice print output of listed credits and points earned

        System.out.println("Their GPA was " + student.getGPA()); // GPA since the book said to use 4.0, no need to make a math formula like in ShowStudent 

    }
    
}