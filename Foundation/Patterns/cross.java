import java.util.Scanner;
public class cross
{
    public static Scanner scn = new Scanner(System.in);
    public static void cross(int row)
    {
        for(int i = 1; i <= row; i++)
        {
            for(int j = 1; j <= row; j++)
            {
                if(i == j || i + j == row +1 )
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        cross(n);
    }
}