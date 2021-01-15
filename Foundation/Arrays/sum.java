import java.util.Scanner;
public class sum
{
    public static Scanner scn = new Scanner(System.in);
    public static void sum(int[] arr1, int[] arr2)
    {
        int p = arr1.length;
        int q = arr2.length;
        int r = Math.max(p, q) + 1;
        int[] arr = new int[r];
        int i = p - 1;
        int j = q - 1;
        int k = r - 1;
        int carry = 0;
        while(k >= 0)
        {
            int sum = carry;
            if(i >= 0)
            {
                sum += arr1[i--];
            }
            if(j >= 0)
            {
                sum += arr2[j--];
            }
            arr[k--] = sum % 10;
            carry = sum/10;
        }

        for(int l = 0; l < arr.length; l++)
        {
            if(l == 0 && arr[l] == 0)
                continue;
            System.out.print(arr[l]);
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int m = scn.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[m];
        for(int i = 0; i < arr1.length; i++)
        {
            arr1[i] = scn.nextInt();
        }
        for(int i = 0; i < arr2.length; i++)
        {
            arr2[i] = scn.nextInt();
        }
        sum(arr1, arr2);
    }
}