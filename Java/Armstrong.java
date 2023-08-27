import java.util.Scanner;
import java.lang.Math;
public class Armstrong {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int temp,n,i,sum=0,rem;
        System.out.println("Enter a number: ");
        n=sc.nextInt();
        temp=n;
        String str=Integer.toString(n);
        int p=str.length();

        while(n!=0)
        {
            rem=n%10;
            sum+=Math.pow(rem,p);
            n/=10;
        }
        if(temp==sum)
        {
            System.out.println(temp+ " is an Armstrong number");
        }
        else{
            System.out.println(temp+ " is not an Armstrong number");
        }
    }
}
