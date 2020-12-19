import java.util.Scanner;
public class diamondnumbers
{
    public static Scanner scn = new Scanner(System.in);
    public static void diamondnumbers(int row)
    {
        int nst = 1;
        int nsp = (row/2);
        for(int r = 1; r <= row; r++)
        {
            for(int csp = 1; csp <= nsp; csp++)
            {
                System.out.print("\t");
            }

            int count = r;
            if(r > (row/2) + 1)
            {
                count = (row - r + 1);
            }

            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print(count + "\t");
                if(cst <= nst/2)
                {
                 count++;
                }
                else
                {
                    count--;
                }
            }
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
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int row = scn.nextInt();
        diamondnumbers(row);
    }
}
