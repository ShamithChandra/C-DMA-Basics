#include<stdio.h>
#include<stdlib.h>
void main(){
   int n,new;
   printf("enter size of array :\n");
   scanf("%d",&n);
   int *arr;
   arr=(int*)calloc(n,sizeof(int));
   for(int i=0;i<n;i++){
      printf("enter element :%d\n",(i+1));
      scanf("%d",&arr[i]);
   }
   arr=realloc(arr,new);
   printf("enter new array size\n");
   scanf("%d",&new);
   
   for(int i=n;i<new;i++){
      printf("enter element :%d\n",(i+1));
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<new;i++){
      printf("element %d is %d\n",(i+1),arr[i]);
      
   }

}