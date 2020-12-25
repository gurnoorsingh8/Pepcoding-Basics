import java.util.Scanner;
public class pattern10
{
    public static Scanner scn = new Scanner(System.in);
    public static void pattern10(int row)
    {
        int nsp1 = row/2;
        int nsp2 = -1;
        for(int r = 1; r <= row; r++)
        {
            for(int csp1 = 1; csp1 <= nsp1; csp1++)
            {
                System.out.print("\t");
            }
            System.out.print("*\t");

            for(int csp2 = 1; csp2 <= nsp2; csp2++)
            {
                System.out.print("\t");
            }
            if(nsp2 != -1)
            {
            System.out.print("*\t");
            }
            System.out.println();

            if(r <= row/2)
            {
                nsp1 --;
                nsp2 += 2;
            }
            else
            {
                nsp1 ++;
                nsp2 -= 2;
            }
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        pattern10(n);
    }
}