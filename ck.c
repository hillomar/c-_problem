#include <stdio.h>
int main(){
    int n,w;
    scanf("%d %d",&n,&w);
    int n1 = n;
    int array1[n];
    int array2[n];
    while(n1--){
        int m,v;
        int i = 0;
        scanf("%d %d",&m,&v);
        array1[i] = m;
        array2[i] = v;
        i+=1; 
    }
    //accending
    int sum = 0;
    int new1[n];
    int new2[n];
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int temp;
            if(array1[i]>array1[j]){
                temp = array1[j];
                array1[j] = array1[i];
                array1[i] = temp;
                
                temp = array2[j];
                array2[j] = array2[i];
                array2[i] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d %d\n",array1[i],array2[i]);
    }
}