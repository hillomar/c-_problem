#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        int array[n];
        int max = 0;
        for(int i = 0;i<n;i++){
            scanf("%d",&array[i]);
            if(array[i]>max){
                max = array[i];
            }
        }
        //printf("%d\n",max);
        int final[n];
        final[0] = max;
        int d = 1;
        for(int i = 0;i<1;i++){
            for(int j = 1;j<n;j++){
            final[d] = array[i]+array[j];
            array[i] = final[d];
            d++;
        }
    }
        for(int i = 0;i<n;i++){
            printf("%d ",final[i]);
        }
        
        
        t--;

    }
}