import java.util.Scanner;

class Main {
   
    float amper_calc(float U, float R) {
           if (R == 0) return 1;
           return (U/R);         
    }
public static void main(String[] args) {
    
    Main m;
    m = new Main();
    System.out.println("Input values U");
    Scanner sc = new Scanner(System.in);
    float a = sc.nextInt();
    System.out.println("Input values R");
    float b = sc.nextInt();      
    System.out.println("Result : Сила тока = "+m.amper_calc(a, b)+" ампера");

   }

}