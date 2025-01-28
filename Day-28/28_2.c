/*
Input Format

The first line contains a single integer, n.

The next line contains 3 space-separated integers, a, b, and c.

Constraints

1<= n <=20
1<= a,b,c <=100

Output Format

Print the nth term of the series, s.

Sample Input 0

5
1 2 3
Sample Output 0

11
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    int ans = 0;
    for (int i = 4; i <= n; i++) {
        ans = a + b + c;
        a = b;
        b = c;
        c = ans;
    }
    return ans;
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans);
    return 0;
}
