#include <stdio.h>
int main(){
    int d = 5;
    int j = 0;
    int array[j];
    while(d--){
        scanf("%d",&array[j]);
        j+=1;
    }
    for(int i = 0;i<j;i++){
        printf("%d ",array[i]);
    }
}