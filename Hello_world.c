#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Send message to user "Hello world!"
int main(void)
{
    write(1,"\nHello World\n", 14);
    return 0;
}