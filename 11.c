#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rev=0, digit;
    printf("Please enter an integer: ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        digit=temp%10;
        temp=temp/10;
        rev=rev*10+digit;
    }
    printf("The number reversed is %d",rev);
    return 0;
}

