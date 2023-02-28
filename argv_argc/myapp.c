#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    if (argc == 3)
    {
        printf("Hi %s, your welcome to %s\n", argv[1], argv[0]);
    }
    else{
        printf("Sorry, try again later");
    }
    return 0;
}