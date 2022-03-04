#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string arr[] = { "anana", "voanjo", "karaoty", "haricovera"};

    for (int i = 0; i < sizeof(arr); i++)
    {
        if(strcmp(arr[i], "haricovera") == 0) {
            printf("misy ato\n");
            return 0;
        }
        
    }
    printf("Tsy misy\n");
    return 1;
}