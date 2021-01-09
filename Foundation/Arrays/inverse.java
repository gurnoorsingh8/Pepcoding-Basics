import java.util.Scanner;
public class inverse
{
    public static Scanner scn = new Scanner(System.in);
    public static int inverse(int[] arr)
    {
        int n = arr.length;
        int[] ans = new int[n];
        for(int i = 1; i < n; i++)
        {
            ans[arr[i]] = i;
        }
        for(int i = 0; i < n; i++)
        {
            System.out.println(ans[i]);
        }
    }

    public static void main()
    {
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = scn.nextInt();
        }
        inverse(arr);
    }
}