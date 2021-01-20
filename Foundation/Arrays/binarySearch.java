import java.util.Scanner;
public class binarySearch
{
    public static Scanner scn = new Scanner(System.in);
    public static int binary(int[] arr, int num)
    {
        int si = 0;
        int ei = arr.length - 1;
        int mid;
        while(si <= ei)
        {
            mid = (si + ei) / 2;
            if(arr[mid] == num)
            {
                return mid;
            }
            else if(arr[mid] > num)
            {
                ei = mid - 1;
            }
            else
            {
                si = mid + 1;
            }
        }
        return -1;
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }
        int num = scn.nextInt();
        System.out.print(binary(arr, num));
    }
}