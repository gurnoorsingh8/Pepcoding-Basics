import java.util.Scanner;
public class diff
{
    public static Scaanr scn = new Scanner(System.in);
    public static void diff(int[] arr1, int[] arr2)
    {
        int p = arr1.length;
        int q = arr2.length;
        int r = p;

        int[] arr = new int(r);

        int i = p - 1;
        int j = q - 1;
        int k = r - 1;
        int borrow = 0; 

        while(k >= 0)
        {
            int num = borrow;
            if(i >= 0)
            {
                num += arr1[i--];
            }
            if(j >= 0)
            {
                num  -= arr2[j--];
            }

            if(num < 0)
            {
                num += 10;
                borrow = -1
            }
            else
            {
                borrow = 0;
            }

            arr[k--] = num;
        }
        boolean flag = false;
        for(int l = 0; l < r; l++)
        {
            if(!flag && arr[l] == 0)
            {
                continue;
            }
            System.out.println(arr[l]);
            flag = true;
        }
    }

    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int[] arr1 = new int(n);
        for(int i = 0; i < n; i++)
        {
            arr1 = scn.nextInt();
        }

        int m = scn.nextInt();
        int[] arr2 = new int(m);
        for(int i = 0l j < m; j++)
        {
            arr2 = scn.nextInt();
        }

        diff(arr1, arr2);
    }
}