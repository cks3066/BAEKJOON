import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int R1 = 1, R2 = 1, S = 1;

		Scanner sc = new Scanner(System.in);

		R1 = sc.nextInt();
		S = sc.nextInt();
		
		R2 = S * 2 - R1;
		
		System.out.println(R2);
	}

}
