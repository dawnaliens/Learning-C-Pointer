#include <stdio.h>
#include <stdlib.h>

int     global_var;
static int      file_static_var;

void func1(void)
{
    int func1_var;
    static int local_static_var;

    printf("&func1_var - %p\t\n", (void*)&func1_var);
    printf("&local_static_var - %p\t\n", (void*)&local_static_var);
}

void func2(void)
{
    int func2_var;

    printf("&func2_var - %p\t\n", (void*)&func2_var);
}

int main(void)
{
    int *p;

    // pointers that pointer to func1 and func2
    printf("func1 - %p\t\n", (void*)func1);
    printf("func2 - %p\t\n", (void*)func2);

    // output the address of string literal
    printf("string literal - %p\t\n", (void*)"richard");

    // output the address of global variable
    printf("&global_var - %p\t\n", (void*)&global_var); 

    // output the address of static variable
    printf("&file_static_var - %p\t\n", (void*)&file_static_var);

    func1();
    func2();

    // the address of malloc allocate
    p = malloc(sizeof(int));
    printf("malloc address - %p\t\n", (void*)p);
    
    return 0;
}