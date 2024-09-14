#include <stdio.h>


int findNthNumber(int x, int y, int n) {
    if (n % 3 == 0)
        return x;
    else if (n % 3 == 1)
        return y;
    else
        return x ^ y;
}


int main() {
    int t, x, y, n;


    printf("Enter number of test cases: ");
    scanf("%d", &t);


    for (int i = 0; i < t; i++) {
        printf("Enter the values for x, y, and n:\n");


        printf("x: ");
        scanf("%d", &x);


        printf("y: ");
        scanf("%d", &y);


        printf("n: ");
        scanf("%d", &n);


        int result = findNthNumber(x, y, n % 3);
        printf("The %dth number in the sequence is: %d\n", n, result);
    }


    return 0;
}