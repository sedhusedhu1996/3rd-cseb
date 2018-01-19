 #include<stdio.h>
 #include<conio.h>
   int main(){
                 int n, numbr1, numbr2, k, remark;
                 printf("\n Enter any two Numbers : ");
                 scanf("%d %d",&numbr1,&numbr2);
                 printf("\n\n The Prime Numbers between the given Two Intervals are . . . \n ");
                 for(n=numbr1; n<=numbr2; ++n)
                 {
                  remark=0;
                  for(k=2;k<=n/2;k++)
                  {
                  if((n % k) == 0)
                  {
                  remark++;
                  break;
                  }
                  }
                  if(remark==0)
                  printf("\n %d ", n);
                  }
                  getch();
   return 0;
   }
