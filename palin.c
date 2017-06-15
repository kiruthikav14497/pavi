#include<stdio.h>
int main()
{

    int s=0,n,a,b;
        printf("Enter the number\n");
        scanf("%d",&n);
        while(n!=0)
            b=n%10;
        s=s*10+b;
        n=n/10;
        if(s==a)
        {

            printf("it is palindrome");
        }
        else
        {
        printf("it is not a palindrome");
        }
}
