#include<stdio.h>
#include<conio.h>
void main()
{
int hour,minute,minute1,total;
        printf("Hrs:");
        if(scanf("%d",&hour)==1)
        {
                printf("Mins:");
                if(scanf("%d",&minute)==1)
                {
                        minute1=hour*60;
                        total=minute1+minute;
                        printf(" total minutes=> %d",total);
                }
                else
                {
                        printf("error ,enter correct value");
                }
        }
        else
        {
                printf("Error,enter correct value");
        }
        }
