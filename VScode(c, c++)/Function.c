#include <stdio.h>

void birthday()
{
   printf("\nHappy Birthday to you!\n");
   printf("Happy Birthday to you!\n");
   printf("Happy Birthday to dear ....!\n");
   printf("Happy Birthday to youuuu!!!\n");
}
int main(){
   birthday();
   birthday();
   birthday();
}


//Arguments and perametres

#include <stdio.h>

void greet(char name[],int age){

   printf("\nHello %s! Hope you are well.\n ",name);
   printf("You are %d years old.\n",age);
   
}
int main(){
   char name[45];
   int age = 21;

   fgets(name,45,stdin);
   name[strlen(name)-1] ='\0';
   greet(name,age);
}


//Return statement
#include <stdio.h>

double square(double x){
   double result = x * x;
   return result;
}

int main(){
   double k = square(4);
   printf("%lf", k);
   return 0;

}


//Ternary/Conditional Operator
#include <stdio.h>

int findmax(int x, int y){
   return (x>y) ? x : y; 
}
int main(){
   int p,w;
   scanf("%d %d",&p,&w);
   int x = findmax(p,w);
   printf("%d",x);
   return 0;
}


//Function Prototype
#include <stdio.h>
void print(char[],int);


int main(){
    char tip[45] = "bro";
    
    int age = 21;
    print(tip,age);
    return 0;
}
void print(char name[45],int age){
    return("\nHello %s.\n",name);
    return("You are %d years old.\n",age);

}


