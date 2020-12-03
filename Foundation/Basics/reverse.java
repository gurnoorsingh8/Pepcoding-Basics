import java.util.Scanner;
public class reverse
{
    public static Scanner scn = new Scanner(System.in);

    public static void printReverse(int n)
    {
        int num = n;
        while(num != 0)
        {
            System.out.println(num % 10);
            num /= 10;
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        printReverse(n);
    }
}