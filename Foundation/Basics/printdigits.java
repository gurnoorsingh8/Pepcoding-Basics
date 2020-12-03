import java.util.Scanner;
public class printdigits
{
    public static Scanner scn = new Scanner(System.in);

    public static int countDigits(int n)
    {
        int count = 0;
        int num = n;
        while(num != 0)
        {
            num /= 10;
            count++;
        }
        return count;
    }

    public static void printDigits(int n)
    {
        int num = n;
        int len = countDigits(num);
        int div = 1;

        while(len --> 1)
        {
            div *= 10;
        }
        while(div != 0)
        {
            System.out.println(n/div);
            n = n % div;
            div /= 10;
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        printDigits(n);
    }
}