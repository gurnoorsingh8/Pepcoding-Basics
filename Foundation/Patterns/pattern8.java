import java.util.Scanner;
public class pattern8
{
    public static Scanner scn = new Scanner(System.in);
    public static void pattern8(int row)
    {
        int nsp = row-1;
        for(int r = 1; r <= row; r++)
        {
            for(int csp = 1; csp <= nsp; csp++)
            {
                System.out.print("\t");
            }
            System.out.println("*\t");
            nsp--;
        }
    }
    public static void main(String[] args)
    {
        int n = scn.nextInt();
        pattern8(n);
    }
}