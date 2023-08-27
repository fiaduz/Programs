import java.util.Scanner;
class NumAboveAvg{
    private int[] n;
    public NumAboveAvg(int[] n){
        this.n=n;
    }
    public float Avg(){
        int sum=0;
        float average;
        for(int i:this.n)
        {
            sum+=i;
        }
        average=(float)sum/10;
        return average;
    }
    
    public void show(){
        float av=Avg();
        System.out.println("The numbers above average are: ");
        for(int i:this.n)
        {
            if(i>av)
            {
                System.out.print(i+"\t");
            }
        }
    }
   
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            int n[]=new int[10];
            System.out.println("Enter the numbers");
            for(int i=0;i<10;i++)
            {
                n[i]=input.nextInt();
            }
            NumAboveAvg see=new NumAboveAvg(n);
            System.out.println("The average of the numbers is: "+see.Avg());
            see.show();
        }
}
