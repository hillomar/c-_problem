//String Function
#include <stdio.h>
#include <string.h>
int main(){


char string1[] = "Bro";
char string2[] = "bRt";

//strupr(string1);
//strlwr(string2);
//strcat(string1, string2);
//strncat(string1, string2, 3);
strcpy(string1, string2);
//strncpy(string1, string2, 2);

//strset(string1, '?');
//strnset(string1, '*', 2);
//***strrev(string1);

printf("%s\n",string1);
printf("%s\n",string2);

//int result = strlen(string1);
//int result = strcmp(string1, string2);
//int result = strncmp(string1,string2,3);
//int result = strcmpi(string1,string2);
//int result = strnicmp(string1,string2,2);
//printf("%d\n",result);

/*if(result == 0){
    printf("these string are same.\n");
}
else{
    printf("these string are not the same.\n");
}*/



}