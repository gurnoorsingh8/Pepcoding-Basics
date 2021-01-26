import java.util.Scanner;
public class ABAddition
{
    public static Scanner scn = new Scanner(System.in);
    public static int anyBaseAddition(int n1, int n2, int b)
    {
        int res = 0, pow = 1, carry = 0;
        while(n1 != 0 || n2 != 0 || carry != 0)
        {
            int r1 = n1 % 10;
            int r2 = n2 % 10;
            
            n1 /= 10;
            n2 /= 10;

            int sum = r1 + r2 + carry;
            int r = sum % b;
            carry = sum / b;

            res += r * pow;
            pow *= 10;
        }
        return res;
    }

    public static void main(String[] args)
    {
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();
        int b = scn.nextInt();
        System.out.println(anyBaseAddition(n1, n2, b));
    }
}