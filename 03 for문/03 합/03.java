import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
	
		/* n이 주어졌을떄 1부터 n까지의 합 구하기
		 * input 으로 n값 입력
		 * for문 으로 1~n까지 합 구하기
		 * 입력 3 일떄 출력 6
		 */
		Scanner input = new Scanner(System.in);
		
		int Sum = 0;
		int n = input.nextInt();
		for (int i = 0; i <= n; i++ ) {
			Sum += i;
		}
		System.out.println(Sum);

	}

}
