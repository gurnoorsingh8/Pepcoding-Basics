import java.util.Scanner;
public class subtraction
{
    public static Scanner scn = new Scanner(System.in);
    public static int anyBaseSubtraction(int b,int n1,int n2)
    {
        int res=0, pow=1, borrow=0;
        while(n1!=0 || n2!=0)
        {
            int m = n1 % 10;
            int n = n2 % 10;

            n1/=10;
            n2/=10;

            int subtraction = n - m + borrow ;

            if(subtraction<0)
            {
                subtraction += b;
                borrow=-1;
            }
            else
            {
                borrow=0;
            }

            res += subtraction*pow;
            pow *=10;

        }
        return res;
    }

    public static void main(String[] args)
    {
        int b = scn.nextInt();
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();

        System.out.println(anyBaseSubtraction(b,n1,n2));   
    }
}