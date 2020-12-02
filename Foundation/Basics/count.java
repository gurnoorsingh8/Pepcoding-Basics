import java.util.Scanner;
public class count
{
    public static Scanner scn = new Scanner(System.in);
    public static int countdigit(int n)
    {
        int count = 0;
        while(n-->0)
        {
            count++;
            n /= 10;
        }
        return count;
    }
    public static void main(String[] args)
    {
        int result;
        int n = scn.nextInt();
        result = countdigit(n);
        System.out.println(result);
    }
}