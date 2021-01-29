import java.util.Scanner;
import java.util.Arrays;

public class Main {
	
	static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) {
		int N = sc.nextInt();
		int[] T = new int[N];
		int[] P = new int[N];
		
		for(int i = 0; i < N; i++) {
			T[i] = sc.nextInt();
			P[i] = sc.nextInt();
		}
		
		int[] memo = new int[N];
		for(int i = N - 1; i >= 0; i--) {
			if(i + T[i] > N) {
				memo[i] = 0;
			}
			else {
				memo[i] = P[i];
				int gt = 0;
				for(int j = i + T[i]; j < N; j++) {
					if(memo[j] > gt) gt = memo[j];
				}
				memo[i] += gt;
			}
		}		
		Arrays.sort(memo);
		
		System.out.println(memo[N-1]);
	}
}
