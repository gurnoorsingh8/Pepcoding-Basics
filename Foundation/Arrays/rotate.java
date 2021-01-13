import java.util.Scanner;
public class rotate
{
    public static Scanner scn = new Scanner(System.in);
    public static void reverse(int[] arr, int i, int j)
    {
        while(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    public static void rotate(int[] arr, int k)
    {
        int n = arr.length;
        k = (k % n + n) % n;
        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
        
        for(int i = 0; i < n; i++)
        {
            System.out.print(arr[i] + " ");
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
        int k = scn.nextInt();
        rotate(arr, k);
    }
}