import java.util.Scanner;
public class pattern16
{
    public static Scanner scn = new Scanner(System.in);
    public static void pattern16(int row)
    {
        int nst = 1;
        int nsp = row*2 - 3;
        int count = 1;
        for(int r = 1; r <= row; r++)
        {
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print(count + "\t");
            }
            for(int csp = 1; csp <= nsp; csp++)
            {
                System.out.print("\t");

            }
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print(count + "\t");
            }
            System.out.println();
            count++;
            nst ++;
            nsp -= 2;
        }
    }

    public static void main(String[] args)
    {
        int row = scn.nextInt();
        pattern16(row);
    }
}