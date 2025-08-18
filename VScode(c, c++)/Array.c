#include <stdio.h>
int main(){
    double number[] = {4,3,2,1};
    printf("%.2lf\n",number[2]);

    double numbers;
    number[0]==4;
    number[1]==3;
    number[2]==2;
    number[3]==1;
    printf("%.2lf\n",number[3]);
}


//2D Array

int main(){
    int number[2][3] = {{1,2,3},{4,5,6}};
    for(int i= 0; i<2;i++){
        for(int j=0; j<3;j++){
            printf("%d",number);
        }
    }
    
}


//Array of Strings

#include <string.h>
int main(){

    char cars[][10] = {"mustang","tesla","BMW"};
    strcpy(cars[0],"Lambo");
    for(int i = 0;i<sizeof(cars)/sizeof(cars[0]);i++){
        printf("%s\n",cars[i]);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    char words[t][15];
    for(int i = 0; i<t;i++){
        scanf("%s",&words[i]);
    }
    for(int i = 0; i<t;i++){
        printf("%s\n",words[i]);
    }
    
return 0; 
    
}


//Sort an Array

#include <stdio.h>
int main(){
    int t = 10;
    int temp;
    int numbers[10];
    for(int i = 0; i<t; i++){
        scanf("%d",&numbers[i]);
    }
    //compare korbo
    for(int i  = 0; i<t; i++){
        for(int j = 0; j<t; j++){
            if(numbers[i]<numbers[j]){
                //swap korbo
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
            else{
                continue;
            }
        }
    }
    //ptrint korbo
    for(int i = 0; i<t; i++){
        printf("%d ",numbers[i]);
    }
}