Given a string in which the same character occurs in many consecutive character elements. Your task is to find the characters that have even frequency and are consecutive. Display the sum of every frequency count( For even frequency only)



Example 1:

Sample Input:

aaabbaccccdd    

Sample Output:

8



Example 2

Sample Input:

vdkkmmmnn  

Sample Output:

4

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        System.out.println(sumOfEvenFrequency(input));
        scanner.close();
    }

    public static int sumOfEvenFrequency(String input) {
        int sum = 0;
        int count = 1;
        char prev = input.charAt(0);
        for (int i = 1; i < input.length(); i++) {
            char current = input.charAt(i);
            if (current == prev) {
                count++;
            } else {
                if (count % 2 == 0) {
                    sum += count;
                }
                count = 1;
            }
            prev = current;
        }
        if (count % 2 == 0) {
            sum += count;
        }
        return sum;
    }
}
