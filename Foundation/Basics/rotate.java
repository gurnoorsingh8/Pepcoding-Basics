import java.util.Scanner;
public class rotate
{
    public static Scanner scn = new Scanner(System.in);
    public static int countdigit(int n)
    {
        int count = 0;
        while(n --> 0)
        {
            count++;
            n /= 10;
        }
        return count;
    }

    public static int rotate(int n, int r)
    {
        int len = countdigit(n);
        r = r % len;
        if(r < 0)
        {
            r = (r % len) % len;
        }

        int mul = 1, div = 1;
        for(int i = 1; i <= len; i++)
        {
            if(i <= r)
            {
                mul *= 10;
            }
            else
            {
                div *= 10;
            }
        }
        int a = n%div;
        int b = n/div;

        return a * mul + b;
    }
    public static void main(String[] args)
    {
        int result;
        int n = scn.nextInt();
        int r = scn.nextInt();
        result = rotate(n, r);
        System.out.println(result);
    }
}