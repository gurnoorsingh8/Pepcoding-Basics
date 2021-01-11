import java.util.Scanner;
public class rotate
{
    public static Scanner scn = new Scanner(System.in);
    public static void rotate(int[] arr)
    {
        int i = 0;
        int j = arr.length - 1;
        while(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
        for(int k = 0; k < arr.length; k++)
        {
            System.out.print(arr[k];);
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nexInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = scn.nextInt();
        }
        rotate(arr);
    }
}