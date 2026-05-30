#include<stdio.h>
    
   
    int main(){
       int n=5;
       
       for(int i=1;i<=n;i++){
          int a=1;
       if(i%2!=0){
           
           for(int j=1;j<=i;j++){
               printf("%d",a);
              a++;
           }
        
           printf("\n");}
        else if(i%2==0){
            char ch='A';
            for(int k=1;k<=i;k++){
                printf("%c",ch);
                ch++;
            }
            printf("\n");
       }}
       
        return 0;}
        
        
        
