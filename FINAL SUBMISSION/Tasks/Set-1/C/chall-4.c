#include <stdio.h>
int main() {
    int t, x, y, n, result;
    printf("");
    scanf("%d", &t);
    while (t > 0) {
        printf("");
        scanf("%d %d", &x, &y);
        printf("");
        scanf("%d", &n);
        if (n % 3 == 0) {
            result = x;
        } else if (n % 3 == 1) {
            result = y;
        } else {
            result = x ^ y;
        }
        printf("The %d-th number: %d\n", n, result);
        
        t--;
    }
    return 0;
}