import java.util.Scanner;

public class Baekjoon2460 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int people = 0;
        int max = 0;
        for (int i = 0; i < 10; i++) {
            int out = scan.nextInt();
            int in = scan.nextInt();
            people -= out;
            people += in;
            if (people>max) {
            	max = people;
            }
        }
        System.out.println(max);
    }
}