#include <stdio.h>

int main() {

    int array2[] = {10,11,12,13};
    //int array1[4]; 
    int array3[] = {14,15,16,17};

    printf("\n\n");
    //printf("\nIndex 0 of the array1 starts at: %p" , &array1);
    printf("\nIndex 1 of the array2 starts at: %p" , &array2);
    printf("\nIndex 0 of the array3 starts at: %p" , &array3);


    for (int i = 0; i < 10; i++){

        printf("\n\nPlease enter a number: ");  
        scanf("%d", &array3[i]);

        printf("\n\nCurrent numbers in array2 are: ");

        for (int i = 0; i < 4; i++) {
            printf(" %d ", array3[i]);
        }

        printf("\n\nCurrent numbers in array3 are: ");

        for (int i = 0; i < 4; i++) {
            printf(" %d ", array2[i]);
        }

    }

    printf("\n\n");

    return 0;

}