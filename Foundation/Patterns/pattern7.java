import java.util.Scanner;
public class pattern7
{
    public static Scanner scn = new Scanner(System.in);
    public static void pattern7(int row)
    {
        int nsp = 0;
        for(int r = 1; r <= row; r++)
        {
            for(int csp = 1; csp <= nsp; csp++)
            {
                System.out.print("\t");
            }
            System.out.print("*\t");
            System.out.println();
            nsp++;
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        pattern7(n);
    }
}