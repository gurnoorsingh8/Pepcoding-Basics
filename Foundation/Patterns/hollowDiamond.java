import java.util.Scanner;
public class hollowDiamond
{
    public static Scanner scn = new Scanner(System.in);
    public static void hollowdiamond(int row)
    {
        int nst = (row+1)/2;
        int nsp = 1;
        for(int r = 1; r <= row; r++)
        {
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print("*");
            }
            for(int csp = 1; csp <= nsp; csp++)
            {
                System.out.print(" ");
            }
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print("*");
            }
            if(r <= row/2)
            {
                nst --;
                nsp += 2;
            }
            else
            {
                nst ++;
                nsp -= 2;
            }
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        hollowdiamond(n);
    }
}