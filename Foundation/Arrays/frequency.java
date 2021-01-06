// import java.util.Scanner;
// public class frequency
// {
//     public static Scanner scn = new Scanner(System.in);
//     public static void freq(int[] arr)
//     {
//         int num = scn.nextInt();
//         int count = 0;
//         for(int i = 0; i < arr.length; i++)
//         {
//             if(arr[i] == num)
//             {
//                 count++;
//             }
//         }
//         System.out.println(count);
//     }

//     public static void main(String[] args)
//     {
//         int n = scn.nextInt();
//         int[] arr = new int[n];
//         for(int i = 0; i < arr.length; i++)
//         {
//             arr[i] = scn.nextInt();
//         }
//         freq(arr);
//     }
// }
import java.util.Scanner;
public class frequency
{
    public static Scanner scn = new Scanner(System.in);
    public static int freq(int num, int data)
    {
        int count = 0;
        int mod;
        while(num > 0)
        {
            mod = num % 10;
            if(mod == data)
            {
                count++;
            }
            num /= 10;
        }
        return count;
    }

    public static void main(String[] args)
    {
        int num = scn.nextInt();
        int data = scn.nextInt();
        System.out.println(freq(num, data));
    }
}