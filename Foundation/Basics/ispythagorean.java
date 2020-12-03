import java.util.Scanner;
public class ispythagorean
{
    public static Scanner scn = new Scanner(System.in);
    public static boolean isPythagorean(int a, int b, int c)
    {
        if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
        {
            return true;
        }
        return false;
    }

    public static void main(String[] args)
    {
        int a = scn.nextInt();
        int b = scn.nextInt();
        int c = scn.nextInt();
        System.out.println(isPythagorean(a, b, c));
    }
}