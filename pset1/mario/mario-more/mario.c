#include <cs50.h>
#include <stdio.h>

void pyramid (int n);

int main(void) 
{
    int n;
    do 
    {
        n = get_int("Input number between 1 and 8: ");
    } while (n < 1 || n > 8);

    pyramid(n);
}

void pyramid (int n) {
    //for each row
    for (int i = 1; i <= n; i++) {
        //for each column
        // print initial spaces if any
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // print left slope
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        // print middle
            printf(" ");
        //print right slope
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }

}