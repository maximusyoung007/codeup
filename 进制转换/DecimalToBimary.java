package OJ; 
import java.math.BigInteger;
 import java.util.Scanner;
 	public class DecimalToBimary{
 			public static void main(String[] args) {
 					Scanner cin = new Scanner(System.in);
 						while(cin.hasNext()){
 								System.out.println(new BigInteger(cin.next()).toString(2));
 						}
 			}
 }