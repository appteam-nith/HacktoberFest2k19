import java.util.Scanner;
class prime
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a whole number");
        int p = sc.nextInt();
        int z;
        for(int i = 2 ; i<p ; i++)
        {
            double a = p%i ;
            if(a==0)
            {
                 z = 1;
                break ;
            }
            else
            {
                z=0 ;
            }
        }
        if( z==1 )
        {
            System.out.println( p+" is a prime number ");
        }
        else
        {
            System.out.println(p+" is not a prime number ");
        }
    }
}