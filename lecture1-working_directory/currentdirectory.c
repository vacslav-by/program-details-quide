#include <stdio.h>
#include <unistd.h>

int main ()
{
    char currentDirectory[1024];

    getwd(currentDirectory);
    printf("Current path: %s\n", currentDirectory);

    return 0;
}