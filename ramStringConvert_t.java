import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.nextLine();
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        System.out.println(canConvert(a, b, k) ? "Yes" : "No");
        scanner.close();
    }

    private static boolean canConvert(String a, String b, int k) {
        int[] countA = new int[26];
        int[] countB = new int[26];
        for (char c : a.toCharArray()) {
            countA[c - 'a']++;
        }
        for (char c : b.toCharArray()) {
            countB[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (countA[i] < countB[i] || (countA[i] - countB[i]) % k != 0) {
                return false;
            }
        }

        return true;
    }
}