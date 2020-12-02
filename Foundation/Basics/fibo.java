import java.util.Scanner;
public class fibo
{
    public static Scanner scn = new Scanner(System.in);
    public static void printfibo(int n)
    {
        int a = 0;
        int b = 1;
        for(int i = 1; i <= n; i++)
        {
            System.out.println(a);
            int sum = a + b;
            a = b;
            b = sum;
        }
    }
    public static void main(String[] arg)
    {
        int n = scn.nextInt();
        printfibo(n);
    }
}