import java.util.Scanner;
public class fibotriangle
{
    public static Scanner scn = new Scanner(System.in);
    public static void fibotriangle(int row)
    {
        int nst = 1;
        int a = 0;
        int b = 1;
        for(int r = 1; r <= row; r++)
        {
            for(int cst = 1; cst <= nst; cst++)
            {
                System.out.print(a + "\t");
                int sum = a + b;
                a = b;
                b = sum;
            }
            System.out.println();
            nst++;
        }
    }
    public static void main(String[] args)
    {
        int n = scn.nextInt();
        fibotriangle(n);
    }
}