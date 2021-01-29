import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int num[] = new int[5];

		Scanner sc = new Scanner(System.in);

		for(int i = 0; i < 5; i++) {
			num[i] = sc.nextInt();
			num[i] = num[i] * num[i];
		}
		
		int sum = 0;
		for(int i = 0; i < 5; i++) {
			sum += num[i];
		}
		
		System.out.println(sum % 10);
	}

}
