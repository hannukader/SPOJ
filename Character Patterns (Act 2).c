#include<stdio.h>
int main()
{
   int t;
   int l,c,i=0,j=0;
   scanf("%d",&t);
   while(t--){  
    scanf("%d %d",&l,&c);
    for(i=1;i<=l;i++){
     for(j=1;j<=c;j++){
         if(i==1||i==l)
         printf("*");
         else if(j==1||j==c)
         printf("*");
         else
         printf(".");
       
     }
    
     printf("\n");}
   }
   return 0;}
       