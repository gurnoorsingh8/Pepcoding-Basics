import java.util.Scanner;
public class table
{
    public static Scanner scn = new Scanner(System.in);

    public static void table(int num)
    {
        int result;
        for(int r = 1; r <= 10; r++)
        {
            result = num * r;
            System.out.println(num + " * " + r + " = " + result);
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        table(n);
    }
}