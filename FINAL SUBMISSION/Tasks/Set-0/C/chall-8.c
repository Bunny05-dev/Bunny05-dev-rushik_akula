#include <stdio.h>
#include <stdlib.h>  




#define SIZE 10








int countOccurrences(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}








int findMinimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}








int findMaximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}




int main(int argc, char *argv[]) {
   
    int arr[SIZE] = {5, 1, 9, 3, 7, 6, 8, 4, 2, 0};
   
   
    if (argc != 2) {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }




   
    int key = atoi(argv[1]);




   
    int occurrences = countOccurrences(arr, SIZE, key);




   
    int min = findMinimum(arr, SIZE);
    int max = findMaximum(arr, SIZE);




   
    printf("Number of occurrences of %d: %d\n", key, occurrences);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);




    return 0;
}
