/*#include <stdio.h>
int main(){
    int summation = 0;
    int number;
    ONE:
    printf("Enter a number ");
    scanf("%d",&number);
    if(number<0){
        goto TWO;
    }
    else{
        summation+=number;
        goto ONE;
    }
    TWO:
    printf("Summation is %d.\n",summation);
}*/


/*#include <stdio.h>
int main(){
    int date_of_birth;
    scanf("%d",&date_of_birth);
    (date_of_birth%2==0)?printf("Nahid is Single.\n"):printf("Nahid is Mingle.\n");
}*/

#include <stdio.h>
int main(){
    int age = 21;
    int *pAge = NULL;
    pAge = &age;

printf("%p\n",*pAge);
}



