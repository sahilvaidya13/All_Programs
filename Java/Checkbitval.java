
import java.util.Scanner ;
class Checkbitval {
    
public static void CheckBit(int n,int k){
        int num = n>>(k-1) ;
        
        if((num&1)==1){
            System.out.println(k+" bit of "+n+" is: "+1);
        }else{
            System.out.println(k+" bit of "+n+" is: "+0);
        }
    }
    
    public static void main(String args[]){
         Scanner sc1 = new Scanner(System.in);
         Scanner sc2 = new Scanner(System.in);
         System.out.println("Enter number");
         int number = sc1.nextInt();
         System.out.println("Enter kth bit");
         int bit = sc2.nextInt() ;
         CheckBit(number,bit) ;
    }
}
    
