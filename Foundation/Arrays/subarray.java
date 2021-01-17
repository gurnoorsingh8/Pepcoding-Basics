import java.util.Scanner;
public class subarray
{
    public static Scanner scn = new Scanner(System.in);
    public static void sub(int[] arr)
    {
        for(int i = 0; i < arr.length; i++)
        {
            for(int j = 0; j < arr.length; j++)
            {
                for(int k = i; k <= j; k++)
                {
                    System.out.print(arr[k] + "\t");
                }
                System.out.println();
            }
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }
        sub(arr);
    }
}