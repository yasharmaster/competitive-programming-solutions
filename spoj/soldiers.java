import java.math.*;

import java.util.Scanner;



public class Main {

    
	public static void main(String[] args) {
     
   
        Scanner sc = new Scanner(System.in);
    
	   int t = sc.nextInt();

	BigInteger Two = new BigInteger("2");
        BigInteger One = new BigInteger("1");
        while (t > 0){
            BigInteger m = sc.nextBigInteger();
            BigInteger n = sc.nextBigInteger();
            
            BigInteger ans1, ans2, temp;
            temp = m.mod(Two);
            
            if(temp.equals(One)){

                temp = m.divide(Two);
                temp = temp.add(One);
                temp = temp.multiply(n);
                ans1 = temp;
            }
            else{
                temp = m.divide(Two);
                temp = temp.multiply(n);
                ans1 = temp;
            }
            temp = n.mod(Two);
            if(temp.equals(One)){
                temp = n.divide(Two);
                temp = temp.add(One);
                temp = temp.multiply(m);
                ans2 = temp;
            }
            else{
                temp = n.divide(Two);
                temp = temp.multiply(m);
                ans2 = temp;
            }
            t--;
            System.out.println(ans1.max(ans2));
        }
    }
 
}
 