import java.util.Scanner;

public class Main {
	

	public static void main(String[] args) {
		
		Scanner input = new Scanner (System.in);
		
		/* 시험 점수에 따른 학점 표시
		 * 입력값 100 일때 출력값 A
		 */
		
		int t = input.nextInt();
		
		if (t <= 100 && t >= 90) {
			System.out.println("A");
		}
		else if(t <= 89 && t >= 80) {
			System.out.println("B");
		}
		else if(t <= 79 && t >= 70) {
			System.out.println("C");
		}
		else if(t <= 69 && t >= 60) {
			System.out.println("D");
		}
		else {
			System.out.println("F");
		}

	}

}
