import java.util.Scanner;
public class binomial
{
    public static Scanner scn = new Scanner(System.in);
    public static void binomial(int row)
    {
        
        for(int n = 1; n < row; n++)
        {
            int val = 1;
            for(int r = 0; r <= n; r++)
            {
                System.out.print(val + "\t");
                val = ((n - r) * val) / (r + 1);
            }
            System.out.println();;
        }
    }
    public static void main(String[] args)
    {
        int n = scn.nextInt();
        binomial(n);
    }
}