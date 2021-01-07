import java.util.Scanner;
import java.util.Arrays;    //to use Arrays.fill()
public class L001
{
    public static Scanner scn = new Scanner(System.in);
    public static void test1()
    {
        int n = scn.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }

        System.out.println("--------------------------");

        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i]);
        }
    }

    public static void test2()
    {
        int n = scn.nextInt();
        int[] arr = new int[n];

        Arrays.fill(arr, 8);
        for(int = 1; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[], args)
    {
        test1();
        test2();
    }
}