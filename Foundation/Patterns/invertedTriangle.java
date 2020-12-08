import java.util.Scanner;
public class invertedTriangle
{
    public static Scanner scn = new Scanner(System.in);

    public static void invertedTriangle(int row)
    {
        int nst = row;
        for(int r = 1; r <= row; r++)
        {
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print("*\t");
            }
            nst--;
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        invertedTriangle(n);
    }
}