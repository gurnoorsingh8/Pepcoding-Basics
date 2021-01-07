 import java.util.Scanner;
public class lastindex
{
    public static Scanner scn = new Scanner(System.in);
    public static int lastIndex(int[] arr)
    {
        int num = scn.nextInt();
        int index = -1;
        for(int i = arr.length-1; i >=0; i--)
        {
            if(arr[i] == num)
            {
                index = i;
                break;
            }
        }
        return index;
    }
    public static void main(String[] args)
    {
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = scn.nextInt();
        }
        System.out.println(lastIndex(arr));
    }
}