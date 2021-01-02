import java.util.Scanner;
public class ABTAB
{
    public static Scanner scn = new Scanner(System.in);
    public static int anyBaseToAnyBase(int n, int b1, int b2)
    {
        int res = 0, pow = 1;
        while(n != 0)
        {
            int rem = n % 10;
            n /= 10;

            res += rem * pow;
            pow *= b1;
        }
        int pow2 = 1, res2 = 0;
        while(res != 0)
        {
            int rem2 = res % b2;
            res /= b2;
        
            res2 += rem2 * pow2;
            pow2 *= 10;
        }
        return res2;
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int b1 = scn.nextInt();
        int b2 = scn.nextInt();
        System.out.println(anyBaseToAnyBase(n, b1, b2));
    }
}