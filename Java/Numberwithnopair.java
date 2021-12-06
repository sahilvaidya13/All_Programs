package javaprograms;


public class Numberwithnopair {

	public static int withNoPair(int[] arr) {
		int num =arr[0];
		for(int i=1;i<arr.length;i++) {
			num = num^arr[i];
		}
		return num ;
	}
	
public static void main(String args[]) {
	int[] ar = {2,10,2,5,6,5,7,7,6,};
	System.out.println("Number with no pair in the array is: " + withNoPair(ar)) ;
}
}



