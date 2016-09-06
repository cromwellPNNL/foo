#include <stdio.h>
 
 
void foo(void)
{
    puts("Hello, I'm a shared library");
}


int main(int argc, char **argv)
{
    printf("I am an executable file\n");    
    printf("I have updated the executable\n");

}
