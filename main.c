#define ARRAY_SIZE 3 // Define the size of the array

#include <stdio.h> 
#include <stdlib.h> 


void main()
{
    // Init variables
    int var1, var2, var3;

    while (1) // Infinite loop
    {
        printf("Enter three integers that are positive: ");
        scanf("%d %d %d", &var1, &var2, &var3);

        // Check if the integers are positive and wheter the difference between them is 7 or greater
        if (var1 <= 0 || var2 <= 0 || var3 <= 0 || abs(var1 - var2) < 7 || abs(var1 - var3) < 7 || abs(var2 - var3) < 7)
        {
            printf("One or more of the integers is not positive or the difference is not 7 or greater.\n");
            continue; // Go back to the beginning of the loop
        }

        // Put the integers into an array
        int arr[ARRAY_SIZE] = {var1, var2, var3};

        // Sort the array from min to max
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            for (int j = i + 1; j < ARRAY_SIZE; j++)
            {
                if (arr[i] > arr[j])
                {
                    // Swap the values
                    int temp = arr[i]; 
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        // Print the sorted array
        printf("The sorted array is: \n");
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            printf("%d \n", arr[i]);
        }

        // Find odd values in between the min and middle values
        printf("The odd numbers are: \n");
        for (int i = arr[0]; i < arr[1]; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d \n", i);
            }
        }

        // Find even values in between the middle and max values
        printf("The even numbers are: \n");
        for (int i = arr[1]; i < arr[2]; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d \n", i);
            }
        }
        
        break; // Exit the loop
    }
}
