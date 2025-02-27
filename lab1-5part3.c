#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements;
    //This prompts the user for the number of elements 
    printf("Enter initial number of elements: ");
    scanf("%d", &num_elements);
    
    //Memory for the array
    int *array = (int *)malloc(num_elements * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    //number of elements entered
    int count = 0;
    //current allocated size
    int capacity = num_elements;
    int input;

    printf("Enter numbers (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &input);
        if (input == -1) {
            break;
        }

        //checks if array needs to be resized
        if (count == capacity) {
            capacity *= 2; // Double the array size
            int *temp = (int *)realloc(array, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(array);
                return 1;
            }
            //updates array pointer
            array = temp;
        }

        array[count++] = input;
    }

    //print numbers entered
    printf("Numbers in the array:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);
    return 0;
}