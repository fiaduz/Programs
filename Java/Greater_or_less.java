import java.util.Scanner;
class Greater{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a=sc.nextInt();
        System.out.println("Enter another number: ");
        int b=sc.nextInt();

        if(a>b)
        {
            System.out.println(a+ " is greater");
        }
         if(a<b)
        {
            System.out.println(b+ " is greater");
        }
        else
        {
            System.out.println("Both "+a+" and "+b+" are equal");
        }
    }
}