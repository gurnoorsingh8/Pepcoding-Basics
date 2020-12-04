import java.util.Scanner;
public class inverse
{
    public static Scanner scn = new Scanner(System.in);
     
    public static int countDigit(int n)
    {
        int count = 0;
        int num = n;
        while(num != 0)
        {
            count++;
            num /= 10;
        }
        return count;
    }

    public static int inverse(int n)
    {
        int len = countDigit(n);
        int result = 0;
        for(int i = 1; i <= len; i++)
        {
            int digit = n % 10;
            n /= 10;
            result += i * Math.pow(10, digit-1);
        }
        return result;
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        System.out.println(inverse(n));
    }
}