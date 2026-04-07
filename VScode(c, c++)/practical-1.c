#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    
    // int array_C[] = {1,2,3,4,5,6};
    // int size;
    // scanf("%d",&size);
    // int array_R[size];
    // for(int i = 0;i<size;i++){
    //     int n;
    //     scanf("%d",&n);
    //     array_R[i] = n;
    // }
    // for(int j = 0;j<size;j++){
    //     printf("C[%d] = %d & R[%d] = %d\n",j,array_C[j],j,array_R[j]);
    // }

    // char name[20] = "Tamim Omar";
    // printf("%s\n",name);

    // char n1[20] = "Tamim";
    // char n2[20] = "Omar";
    // printf("%s",strcat(n1,n2));
    // printf("\n%s",strncpy(n1,n2,4));
    // printf("\n%d\n",strlen(n1));
    // if((strcmp(n1,n2))==0){
    //     printf("Equal.\n");
    // }
    // else{
    //     printf("Not Equal.\n");
    // }

    // FILE *fp;
    // fp = fopen("C:\\Users\\hp\\Desktop\\Study\\1-2\\CSE 151","w");

    // if(fp == NULL){
    //     printf("Not found!\n");
    //     exit(1);
    // }

    // int number;
    // scanf("%d",&number);

    // fprintf(fp,"%d",number);
    // fclose(fp);

    // fp = fopen("E:\\hp\\me.txt","r");
    // fscanf(fp,"%d",&number);

    // printf("The value is %d\n",number);
    // fclose(fp);

    int *array1,*array2;

    array1 = (int*)malloc(5*sizeof(int));
    if(array1==NULL){
        printf("failed");
        return 0;
    }
    //no initialization, random value
    array2 = (int*)calloc(5,sizeof(int));
    array1 = (int*)realloc(array1,10*sizeof(int));
    free(array1);
    free(array2);
}