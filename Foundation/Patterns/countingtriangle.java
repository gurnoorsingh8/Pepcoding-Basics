import java.util.Scanner;
public class countingtriangle
{
    public static Scanner scn = new Scanner(System.in);
    public static void countingtriangle(int row)
    {
        int nst = 1;
        int count = 1;
        for(int r = 1; r <= row; r++)
        {
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print(count +  "\t");
                count++;
            }
            nst++;
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        countingtriangle(n);
    }
}