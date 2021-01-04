import java.util.Scanner;
public class firstlast
{
    public static Scanner scn = new Scanner(System.in);
    public static void firstlast(int[] arr, int num)
    {
        int n = arr.length;
        int startt = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == num)
            {
                startt = i;
                break;
            }
            else
            {
                startt = -1;
            }
            
        }
        int end = 0;
        if(startt != -1)
        {
            for(int i = startt; i < n; i++)
            {
                if(arr[i] != num)
                {
                    end = i-1;
                    break;
                }
            }
        }

        System.out.println(startt);
        System.out.println(end);
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
        firstlast(arr, num);
    }

}