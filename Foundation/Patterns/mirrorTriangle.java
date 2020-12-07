import java.util.Scanner;
public class mirrorTriangle
{
    public static Scanner scn = new Scanner(System.in);

    public static void mirrorTriangle(int row)
    {
        int nst = 1;
        int nsp = row-1;
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
            nst++;
            nsp--;
            System.out.println();

        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        mirrorTriangle(n);
    }
}