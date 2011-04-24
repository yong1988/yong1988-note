#include<stdio.h>
void say_hi(void);
int main(int argc, const char *argv[])
{
    say_hi();
    return 0;
}
void say_hi(void)
{
printf("hello\n");
}
ctags

/*ctags hello.c
vim hello.c

Ctr-]: jump to function definition

Ctr-o: to go back*/
