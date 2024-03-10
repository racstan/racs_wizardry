I guess you all remember that number game where you used to ask your friend to choose a number, then multiply it by some number, then add by some number, and after doing multiple operations, then the answer.

And you were successfully able to find that initial number that was chosen by your friend the beginning of the game.

We are going to make something similar to this. So, you asked your friend to choose a number N, and multiply it by a given number A.

Next, your friend has to choose a divisor of N, let's say 'Z', and add it to the above product. Now the final result becomes a number say X.

 If we frame it as an equation, it can be represented as X = AN

So, now you know the value of A and X. Your task is to find the number N, which was chosen by your friend. The values of N can be multiple, You have to print all the possible values separated by SPACE. If there is no valid value of N, then reply None. This means your friend didn't give you the correct reply.

Let us try to understand it with an example.

 Consider you have given a value of A = 3 and finally received the output value x = 35 Putting the values in equation X=A*N+Z,we get:

 35-3*N+Z, and Z is one of the divisors of N. With a smaller number like 1 or 2, this is not possible. So, we will start with some bigger numbers such as N = 8 Then Z can be 2 or 4 or 8, but in that case, the result will be even, but the answer is odd. So, we move to the next value 9.

With N = 9 ,Z can be 3putting this in the equation: 35 =3*N+Z, and Z is one of the divisors of N.

3*9+3 = 30 which doesn't matches with 35. So, we move

to the next integer.

With N = 10 , Z can be 2 or 5, putting this in the equation:

35=3*N+Z

With Z = 2

3 + 10 + 2 = 32 still not equal to 35.

With z = 5

3*10 + 5 = 35 , still now equal to 35.

So, one of the values of N is 10.

Likewise, if we proceed, we cannot find any other value which could satisfy the above conditions.

So, the output is only 10.



Example 1:

Input:

50 5 -> Input integer, A, X

Output:

None  ->Output





Input format:

First Input Accept value of Integer A.

Second Input-Accept value of Integer, K (Next Line).

Output format :

The output are either None or integers values (separated by space) value as per above logic. (Check the output in Example 1, Example 2).

Constraints:

1 <= xx = 1000000

1 <= A <= X

Only positive integer values

