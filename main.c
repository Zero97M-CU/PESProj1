#include <stdio.h>

void help(int a) {                           //Will move to independent c file
    printf("Help Command\n");
}

void allocate(int a) {
    printf("You are in allocate\n");      //Will move to independent c file
}

void free1(int a)
{
  printf("You are freeing memory\n");      //Will move to independent c file
}

void write(int a){
  printf("You are writing into memory\n");  //Will move to independent c file
}

void display(int a)
{
  printf("You are in display mode\n");       //Will move to independent c file
}
int main(int argc, char **argv)
{

    printf("Welcome User\n");
    void (*func_arr[])(int) = { help, allocate, free1, write, display};

    func_arr[0](1);
    func_arr[1](2);
    func_arr[2](3);
    func_arr[3](4);
    func_arr[4](5);

    return 0;
}