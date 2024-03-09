A shopkeeper in a nearby town always starts a business ₹0. He never uses the previous days money for transaction. Any item in his shop costs ₹30.There are N number of customers waiting in the queue to buy items. A customer can buy any number of items but worth only ₹30.The customer can transact with shopkeeper only with the denominations ₹30,₹60,₹120.The task here is to find the transaction between the shopkeeper and customer is possible.

The customer should be able to buy the item.

The amount each customer uses for his transaction is given as array elements .

The shopkeeper should be able to return the exact change.

Display ‘Transaction Successful’ on the successful transaction with all the customers in the queue.

Display ‘Transaction failed’ on the unsuccessful transaction with any one customer in the queue.



Example 1

Sample Input:

3 -> value of N

30

30

60->a[] ,Elements a[0] to a[N-1],where input of each element is seperated by a new line.

Sample Output:

Transaction successful.

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] transactions = new int[N];
        for (int i = 0; i < N; i++) {
            transactions[i] = scanner.nextInt();
        }
        if (isTransactionPossible(transactions)) {
            System.out.println("Transaction successful");
        } else {
            System.out.println("Transaction failed");
        }
        scanner.close();
    }

    public static boolean isTransactionPossible(int[] transactions) {
        int money = 0;
        for (int i = 0; i < transactions.length; i++) {
            if (transactions[i] == 30) {
                money += 30;
            } else if (transactions[i] == 60) {
                if (money >= 30) {
                    money -= 30;
                } else {
                    return false;
                }
            } else if (transactions[i] == 120) {
                if (money >= 60) {
                    money -= 60;
                } else if (money >= 30) {
                    money -= 30;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
}
