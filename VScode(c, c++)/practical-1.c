#include <stdio.h>
int main(){
    int array_C[] = {1,2,3,4,5,6};
    int size;
    scanf("%d",&size);
    int array_R[size];
    for(int i = 0;i<size;i++){
        int n;
        scanf("%d",&n);
        array_R[i] = n;
    }
    for(int j = 0;j<size;j++){
        printf("C[%d] = %d & R[%d] = %d\n",j,array_C[j],j,array_R[j]);
    }
}