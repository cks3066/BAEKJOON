import java.util.Scanner;

public class Main {
	
	static long memo[] = new long[100];

	public static long F(int n) {
		memo[0] = 0;
		memo[1] = 1;
		
		for(int i = 2; i <= n; i++) {
			memo[i] = memo[i-1] + memo[i-2];
		}
		
		return memo[n];
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		System.out.print(F(n));
	}
}
