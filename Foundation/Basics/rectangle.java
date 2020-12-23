public class rectangle
{
    public static int area(int l, int b)
    {
        return l * b;
    }
    public static int perimeter(int l, int b)
    {
        return 2(l + b);
    }

    public static void main(String[] args)
    {
        System.out.println(area(3,4));
        System.out.println(perimeter(3,4));
    }
}