import java.util.Scanner;
public class max
{
    public static Scanner scn = new Scanner(System.in);
    public static void max()
    {
        int n = scn.nextInt();
        int max = (int)-1e8;
        int[] arr = new int[n];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }

        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        System.out.println(max);
    }

    public static void main(String[] args)
    {
        max();
    }
}