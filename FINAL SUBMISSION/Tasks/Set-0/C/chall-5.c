#include <stdio.h>

int main() {
   
    int num1 = 5;
    int num2 = 3;
    int product = 0;




   
    for (int i = 0; i < num2; i++) {
        product += num1;  
    }




   
    printf("The product of %d and %d is %d\n", num1, num2, product);




    return 0;
}
