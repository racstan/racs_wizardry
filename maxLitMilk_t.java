Given N Rupees. A liter plastic bottle of milk costs R1 Rupees and a liter of the glass bottle of milk costs R2 Rupees. But the empty glass bottle after buying can be exchanged for R3 Rupees. Find the maximum liters of milk which can be bought with N Rupees.

Example-1:

Input:

10 →Value of N

11 →Value of R1 i.e. price of plastic bottle

9→Value of R2 i.e. price of glass bottle

8 →Value of R3 i.e. price of empty glass bottle

Output:

2

    import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int R1 = scanner.nextInt();
        int R2 = scanner.nextInt();
        int R3 = scanner.nextInt();
        System.out.println(maximumLitersOfMilk(N, R1, R2, R3));
        scanner.close();
    }

    public static int maximumLitersOfMilk(int N, int R1, int R2, int R3) {
        int totalPlasticLiters = N / R1;
        int remainingAmount = N % R1;
        int totalGlassLiters = 0;
        
        if (R2 - R3 > 0) {
            totalGlassLiters = remainingAmount / R2;
        }
        
        return totalPlasticLiters + totalGlassLiters;
    }
}
