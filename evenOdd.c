#include<stdio.h>
void evenOdd(int n)
{
    if(n%2==0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);  
}

int main ()
{
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    evenOdd(x);
    return 0;

}