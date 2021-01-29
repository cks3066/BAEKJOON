import java.util.Scanner;
import java.util.Arrays;

public class Main {
	
	static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) {
		int E = sc.nextInt();
		int S = sc.nextInt();
		int M = sc.nextInt();
		
		if(E == 15) E = 0;
		if(S == 28) S = 0;
		if(M == 19) M = 0;
		
		int year = 1;
		
		while(true) {
			if(year % 15 == E && year % 28 == S && year % 19 == M) {
				System.out.println(year);
				return;
			}
			else
				++year;
		}

	}
}
