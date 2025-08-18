#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        char string[51];
        scanf("%s",string);
        int len = strlen(string);
        int arrayA[len];
        int arrayB[len];
        int a = -1;
        int b = -1;
        for(int i = 0;i<len;i++){
            if(string[i]=='A'){
                a++;
                arrayA[a] = i+1;
                
            }
            else{
                b++;
                arrayB[b] = i+1;
                
            }
        }
        arrayA[len] = '\0';
        arrayB[len] = '\0';
        for(int i = 0;i<len;i++){
            printf("%d ",arrayA[i]);
        }
        for(int i = 0;i<len;i++){
            printf("%d ",arrayB[i]);
        }
        
        t--;


    }
}