import java.util.Scanner;
public class oddeven04
{
    public static Scanner scn = new Scanner(System.in);
    public static void oddEven(int n)
    {
        if(n % 2 == 0){
            System.out.println("Number is Even");
        }
        else{
            System.out.println("Number is Odd");
        }
    }
    public static void main(String[] args)
    {
        int num = scn.nextInt();
        oddEven(num);
    }
}