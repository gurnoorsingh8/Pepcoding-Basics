import java.util.Scanner;
public class ceilroof
{
    public static Scanner scn = new Scanner(System.in);
    public static void ceilroof(int[] arr, int num)
    {
        int n = arr.length;
        for(int i = 0; i < n; i++)
        {
            if(num > arr[i] && num < arr[i+1])
            {
                System.out.println(arr[i+1]);
                System.out.println(arr[i]);
            }
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = scn.nextInt();
        }
        int num = scn.nextInt();
        ceilroof(arr, num);
    }
}