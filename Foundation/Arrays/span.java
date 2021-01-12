import java.util.Scanner;
public class span
{
    public static Scanner scn = new Scanner(System.in);
    public static void span(int[] arr)
    {
        int max = (int)-1e8;
        int min = (int)1e8;
        int span;
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        span = max - min;
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }
        span(arr);
    }
}