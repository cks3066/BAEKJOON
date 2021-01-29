import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String input;
		
		Scanner sc = new Scanner(System.in);
		
		input = sc.next();

		int sum = 0;
		int x = 1;
		int y = 1;
		for(int i = input.length() - 1; i >= 0; i--) {
			if(input.charAt(i) == '1') {
				x = 1;
			}
			else if(input.charAt(i) == '2') {
				x = 2;
			}
			else if(input.charAt(i) == '3') {
				x = 3;
			}
			else if(input.charAt(i) == '4') {
				x = 4;
			}
			else if(input.charAt(i) == '5') {
				x = 5;
			}
			else if(input.charAt(i) == '6') {
				x = 6;
			}
			else if(input.charAt(i) == '7') {
				x = 7;
			}
			else if(input.charAt(i) == '8') {
				x = 8;
			}
			else if(input.charAt(i) == '9') {
				x = 9;
			}
			else if(input.charAt(i) == '0') {
				x = 0;
			}
			else if(input.charAt(i) == 'A') {
				x = 10;
			}
			else if(input.charAt(i) == 'B') {
				x = 11;
			}
			else if(input.charAt(i) == 'C') {
				x = 12;
			}
			else if(input.charAt(i) == 'D') {
				x = 13;
			}
			else if(input.charAt(i) == 'E') {
				x = 14;
			}
			else if(input.charAt(i) == 'F') {
				x = 15;
			}
			sum += x * y;
			y *= 16;
		}
		System.out.println(sum);
	}

}
