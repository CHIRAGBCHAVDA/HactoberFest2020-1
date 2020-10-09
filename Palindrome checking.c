// C program to reverse the No. and check whether it's palindrome or not?

#include <stdio.h>
#include <stdlib.h>
int ispalindrome(int num)
{
    int reversed=0;
    int originalnum=num;
    while(num!=0)
    {
       reversed=reversed*10+num%10;
        num=num/10;
    }
    printf("the reversed no is %d\n",reversed);
    if(originalnum==reversed)
    {
        return 1;
    }
    else{
            return 0;
    }
}

int main()
{
    int number;
    printf("Enter the number to check whether it is palindrome or not \n");
    scanf("%d",&number);
    if(ispalindrome(number)==1)
    {
        printf("The number is palindrome");
    }
   else
    {
        printf("The number is not palindrome");
    }

    return 0;
}
