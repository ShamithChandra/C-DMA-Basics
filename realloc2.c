#include<stdio.h>
#include<stdlib.h>
void main(){ // simple realloc program
    int n,new,choice;
    float sum=0;
    printf("enter number of items:\n");
    scanf("%d",&n);
    float *arr;
    arr=(float*)calloc(n,sizeof(float));
    for(int i=0;i<n;i++){
        printf("enter price of item %d:\n",(i+1));
        scanf("%f",&arr[i]);
    }
    printf("Did you buy more items ?\n press 1(YES) or 0(NO)");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter new number of items\n");
        scanf("%d",&new);
        arr=realloc(arr,new);
        for(int i=n;i<new;i++){
            printf("enter price of item %d:\n",(i+1));
            scanf("%f",&arr[i]);
        }
        for(int i=0;i<new;i++){
            sum+=arr[i];
            printf("price of item %d is %.2f\n",(i+1),arr[i]);
        }
        printf("total price =%.2f\n",sum);
    }
    
       

               
    

}
