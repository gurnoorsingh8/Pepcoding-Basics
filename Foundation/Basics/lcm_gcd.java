import java.util.Scanner;
public class lcm_gcd
{
    public static Scanner scn = new Scanner(System.in);
    public static int GCD(int a, int b)
    {
        int divisior = a;
        int dividend = b;
        while(dividend % divisior != 0)
        {
            int rem = dividend % divisior;
            dividend = divisior;
            divisior = rem;
        }
        return divisior;
    }

    public static int LCM(int a, int b, int gcd)
    {
        return ((a/gcd) * b);
    }

    public static void main(String[] args)
    {
        int a = scn.nextInt();
        int b = scn.nextInt();
        int gcd = GCD(a, b);
        System.out.println(gcd);
        System.out.println(LCM(a, b, gcd));
    }
}