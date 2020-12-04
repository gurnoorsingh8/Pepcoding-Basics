import java.util.Scanner;
public class triangle
{
    public static Scanner scn = new Scanner(System.in);

    public static void triangle(int row)
    {
        int nst = 1;
        for(int r = 1; r <= row; r++)
        {
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print("*\t");
            }
            nst++;
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        triangle(n);
    }
}