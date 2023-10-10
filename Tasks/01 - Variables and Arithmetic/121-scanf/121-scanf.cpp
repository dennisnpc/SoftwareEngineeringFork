#include <stdio.h>

int main()
{
    //Create a variable x
    float x = 0;
    int y = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%f", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %.0f\n", x);

    puts("\n");
    printf("Enter another number\n");
    scanf_s("%d", &y);
    printf("y = %d", y);
}


