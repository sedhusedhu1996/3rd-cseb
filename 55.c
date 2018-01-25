#include <stdio.h>
#include <conio.h>  
int main()
{  
    int num, temp;  
    long productOfDigit = 1;
    printf("Enter a Number\n");  
    scanf("%d", &num);  
    temp = num;
    while(num != 0)
    {
        num = num/10;
    } 
    printf("Product of digits of %d = %ld", temp, productOfDigit);  
    getch();
    return 0;  
}
