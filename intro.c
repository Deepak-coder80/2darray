#include <stdio.h>

void main(){
    int a;
    
    printf("Enter a number:");
    scanf("%d",&a);

   if(a==0)
   {
    printf("number is zero\n");
   }else if(a%2==0){
       printf("Number is even\n");
   }else{
        printf("Number is odd");
   }
   
}