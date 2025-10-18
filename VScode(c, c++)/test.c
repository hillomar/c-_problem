#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array1,*array2,*array3;
    int n = 5;
    //Malloc
    array1 = (int*)malloc(5*sizeof(int));
    if(array1==NULL){
        printf("Malloc Allocation FAILED!\n");
        return 1;
    }
    /*checking initial value*/
    for(int i = 0;i<n;i++){
        printf("%d ",array1[i]);
        //all garbage value
    }
    printf("\n");
    /*initializing value*/
    for(int i = 0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    /*printing value*/
    printf("value is: ");
    for(int i = 0;i<n;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");

    //Calloc
    array2 = (int*)calloc(5,sizeof(int));
    if(array2==NULL){
        printf("Malloc Allocation FAILED!\n");
        return 1;
    }
    /*checking initial value*/
    for(int i = 0;i<n;i++){
        printf("%d ",array2[i]);
        //all garbage value
    }
    printf("\n");
    /*initializing value*/
    for(int i = 0;i<n;i++){
        scanf("%d",&array2[i]);
    }
    /*printing value*/
    printf("value is: ");
    for(int i = 0;i<n;i++){
        printf("%d ",array2[i]);
    }
    printf("\n");

    //Realloc
    array3 = (int*)realloc(array1,10);
    /*initial value of the rest*/
    for(int i = 0;i<10;i++){
        printf("%d ",array3[i]);
    }
    printf("\n");
    /*initializing rest of the value*/
    for(int i = n;i<10;i++){
        scanf("%d",&array3[i]);
    }
    /*print value*/
    printf("value is: ");
    for(int i = 0;i<10;i++){
        printf("%d ",array3[i]);
    }
    printf("\n");

    //free
    free(array1);
    free(array2);
    free(array3);
}