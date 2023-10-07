#include <stdio.h>

int main()
{
    int exitEarly = 0;
    for (int i = 0; 1 == 1; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if (c == 'q' || c == 'Q')
        {
            printf("\tUser stopped the loop early at %d\n", i);
            exitEarly = 1;
            break;                  // break out of the for loop
        }

        if (exitEarly == 1) {
            printf("Loop has exited early\n");
        }
       
        printf("Loop counter = %d\n", i);
    }
    puts("Done");
}
