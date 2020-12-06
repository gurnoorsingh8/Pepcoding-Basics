import java.util.Scanner;
public class diamond
{
    public static Scanner scn = new Scanner(System.in);
    public static void diamond(int row)
    {
        int nst = 1;
        int nsp = row/2;
        for(int r = 1; r <= row; r++)
        {
            for(int csp = 1; csp <= nsp; csp++)
            {
                System.out.print("\t");
            }
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print("*\t");
            }
            System.out.println();
            if(r <= row/2)
            {
                nsp--;
                nst += 2;
            }
            else
            {
                nsp++;
                nst -= 2;
            }
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        diamond(n);
    }
}