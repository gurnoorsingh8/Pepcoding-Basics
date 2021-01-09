import java.util.Scanner;
public class min
{
    public static Scanner scn = new Scanner(System.in);
    public static void min()
    {
        int n = scn.nextInt();
        int min = (int)1e8;
        int[] arr = new int[n];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
        System.out.println(min);
    }

    public static void main(String[] args)
    {
        min();
    }
}