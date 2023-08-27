import java.util.Scanner;

public class Array {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);

        System.out.println("Enter size of array: ");
        int size=input.nextInt();

        int arr[]=new int[size];
        int i;
        System.out.println("Enter the elements of array:");
        for(i=0;i<size;i++)
        {
            arr[i]=input.nextInt();
        }
        System.out.println("The array is: ");
        for(i=0;i<size;i++)
        {
            System.out.print(arr[i]+ " \t");
        }
    }
}
