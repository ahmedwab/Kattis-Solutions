import java.util.Scanner;



public class Main {



    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int x,y,greater;
        x=in.nextInt();
        y=in.nextInt();

        if(x==0&&y==0) System.out.println("Not a moose");
        else if(x==y) System.out.println(("Even "+(x+y)));
        else{
                if (x > y) {
                    greater=2*x;
                    System.out.println("Odd "+greater);
                }
                else {
                    greater = 2 * y;
                    System.out.println("Odd " + greater);
                }
            }


    }
}
