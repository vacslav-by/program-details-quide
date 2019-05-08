#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void printCurrentDirectory();
void enterNewDirectory(char* buf);

int main ()
{
    char newDirectory[1024];

    printCurrentDirectory();
    enterNewDirectory(newDirectory);
    if (chdir(newDirectory) == -1) {
        printf("%s\n",strerror(errno));
    } else {
        printCurrentDirectory();
    }
    return 0;
}

void printCurrentDirectory()
{
    char currentDirectoryName[1024];
    getwd(currentDirectoryName);
    printf("Current directory: %s\n", currentDirectoryName);
}

void enterNewDirectory(char* buf)
{
    printf("Enter new directory path\n");
    scanf("%s", buf);
}
