import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            long n = scanner.nextLong();
            int count = (int) countDigits(n);

            if((count == 2 && n >18) || n % 10 == 9){
                System.out.println("NO");
                continue;
            }

            int a = count;
            String min = "";
            while (a-- > 1) {
                min += "1";
            }
            min += "0";

            String max = "1";
            a = count - 1;
            while (a-- > 1) {
                max += "9";
            }
            max += "8";

            long M = Long.parseLong(max);
            long m = Long.parseLong(min);

            if(n <= M && n >= m) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }

            //System.out.println(M+" " + m);

        }
        scanner.close();
    }

    public static long countDigits(long n) {
        return String.valueOf(n).length();
    }
}
