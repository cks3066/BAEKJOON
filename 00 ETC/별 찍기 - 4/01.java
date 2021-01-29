import java.util.Scanner;
import java.util.Arrays;

public class Main {
	
	static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) {
		int N = sc.nextInt();
		
		for(int i = N; i >= 1; i--) {
			for(int j = i; j < N; j++) {
				System.out.print(" ");
			}
			for(int k = 0;k < i; k++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
