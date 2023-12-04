#include<stdio.h>
void fun(int *ptr){
    ptr=3;
}
int main()
{
    int a=5;
    fun(&a);
    printf("%d",a);
    return 0;
}