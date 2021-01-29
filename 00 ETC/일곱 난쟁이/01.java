import java.util.Scanner;
import java.util.Arrays;

public class Main {
	
	public static void main(String[] args) {
		int height[] = new int[9];
		
		Scanner sc = new Scanner(System.in);
		
		int sum = 0;
		for(int i = 0; i < 9; i++) {
			height[i] = sc.nextInt();
			sum += height[i];
		}
		
		int key = sum - 100;
		
		int fst = 0, scd = 0;
		for(int i = 0; i < 8; i++) {
			for(int j = i + 1; j < 9; j++) {
				if(height[i] + height[j] == key) {
					fst = height[i];
					scd = height[j];
				}
			}
		}
		
		Arrays.sort(height);
		
		for(int i = 0; i < 9; i++) {
			if(height[i] == fst || height[i] == scd) continue;
			System.out.println(height[i]);
		}
		
	}
}
