'''
The person is travelling from place A to place B. He will take 12 hours to reach the destination by roads. As the person starts his journey, he has to note the current time in hours H and minutes M ( non negative integer input ).The task is to find the time left for him to reach the destination (output).If current time (hours or minutes) is a value exceeding 24 hours, the output should be a negative integer value, representing total exceeded hours and minutes (See the Example 3).

Input format

The candidate has to write the code to accept two inputs separated by a new line.

First Input Accept value for hours which is H.

Second Input- Accept value for minutes which is M.

Output format

The output should be time in 24 hour format (Check the output in Example 1 and 2 above). The hours and minutes should be separated by "::" without any additional space(See the output in examples). 

Additional messages in output will cause the failure of test cases.

Constraints:

0<H<=100

0<M<=60

Example 1:

Input:

14         value of H i.e Hours

20         value of M i.e Minutes

Output:

9::40      Time left to reach the destination



Example 2:

Input:

1        value of H i.e Hours

15         value of M i.e Minutes

Output:

22::45     Time left to reach the destination



Example 3:

Input:

30        value of H i.e Hours

5          value of M i.e Minutes

Output:

-6::5       Time left to reach the destination


'''

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int hours = scanner.nextInt();
        int minutes = scanner.nextInt();
        System.out.println(calculateTimeLeft(hours, minutes));
        scanner.close();
    }

    public static String calculateTimeLeft(int hours, int minutes) {
        int totalMinutes = hours * 60 + minutes;
        int timeLeft = 1440 - totalMinutes; // Total minutes in a day
        if (timeLeft >= 720) {
            timeLeft -= 720; // Subtract 12 hours if exceeds a day
        }
        int leftHours = timeLeft / 60;
        int leftMinutes = timeLeft % 60;
        return String.format("%02d::%02d", leftHours, leftMinutes);
    }
}
