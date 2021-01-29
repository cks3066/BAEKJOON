import java.util.Scanner;
import java.util.Arrays;

public class Main {
	
	static Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) {
		int N = sc.nextInt();
		
		int[] arr = new int[N];
		for(int i = 0; i < N; i++) {
			arr[i] = sc.nextInt();
		}
		
		Arrays.sort(arr);
		int gt = 0;
		for(int i = 0; i < N; i++) {
			arr[i] = arr[i] * (N - i);
			if(arr[i] > gt) gt = arr[i];
		}
		System.out.println(gt);
	}
}
