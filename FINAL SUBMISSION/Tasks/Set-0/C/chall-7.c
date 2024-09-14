#include <stdio.h>








int countVowels(const char *str) {
    int count = 0;
    char c;
   
    while ((c = *str++) != '\0') {  
       
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }
       
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}




int main() {
    char str[100];




   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);




   
    int vowelCount = countVowels(str);




   
    printf("Number of vowels in the string: %d\n", vowelCount);




    return 0;
}
