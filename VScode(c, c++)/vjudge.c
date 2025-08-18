#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char word[101];
    scanf("%s",word);
    int len = strlen(word);
    int up = 0;
    int low = 0;
    for(int i = 0;i<len;i++){
        if(isupper(word[i])){
            up += 1;
        }
        else{
            low += 1;
        }
    }
    if(low>=up){
        char final[101];
        for(int i = 0;i<len;i++){
            final[i] = tolower(word[i]);
        }
        final[len] = '\0';
        printf("%s\n",final);
    }
    else{
        char final[101];
        for(int i = 0;i<len;i++){
            final[i] = toupper(word[i]);
        }
        final[len] = '\0';
        printf("%s\n",final);
    }
}