#include <stdio.h>
int main(){
//this is a single line comment

/*This is a
multiple line comment*/

//to escape sequence write \n
//to do more space write \t

//VARIABLES
int x; //declaration
x = 344; //initialization
int y = 455; //both

float GPA=3.75;
char grade='A';
double gpa=3.890004;
char name[]="Tamim";

printf("Yo %s!\nHow are you?\nYou're grade ",name);
printf("is %.2f.\nThat is quite good.\nAnd ",GPA);
printf("this is your grade %c.\n",grade);
return 0;


//DATA TYPES
char a='T'; //this needs %c
char b[] ='Nice'; //this needs %s
float pi = 3.14157890; //4 bytes of memory (32 bits precision) 6-7 digits %f
double Pi = 3.1415234567890; //8 bytes of memory (64 bits precision) 15-16 digits %lf

char f = 120; //1 byte (-128 to 127) %d or %c
unsigned char g = 254; //1 byte (0 to 255) %d or %c

short int w = 32767; //2 bytes (-32,768 to 32,767) %d
unsigned short int l = 43567; //2 bytes (0 to 65,535) %d

long int o = 34234334; //4 byte (-2,147,483,648 to +2,147,483,647) %d
unsigned long int f = 324252423; //4 byte (0 to 4,294,967,295) %u

long long int p = 23253453453; //8 bytes (-9 quintillion to +9 quintillion) %lld
unsigned long long int m = 342253534242525; //8 bytes (0 to +18 quintillion) %llu


//FORMAT SPECIFIERS
/* %d for int, %c for char, %s for string(array of characters)
   %f for float, %lf for double. */

/* %.1 = decimal precision
   %1 = minimum field width
   %- = left align */


//CONSTANT
const float PI = 3.14159;
printf("pi = %.5f",PI);


//ARITHMETIC OPERATORS
/*   +,-,*,/,%,--,++   */
int x = 5;
int y = 2;
float z = x / (float) y;
printf("%.2f",z);


//ASSIGNMENT OPERATORS
/*  x+=2
    x-=3
    x*=4
    x/=5
    x%=6  */


//USER INPUT
char name[25];
int age;
printf("\nWhat's your name? ");
/*scanf("%s",name);*/
fgets(name,25,stdin);
name[strlen(name)-1] = '\0';
printf("And what's your age? ");
scanf("%d",&age);
printf("Hello %s! Hope you're well.\n",name);
printf("You're %d years old.\n",age);


//MATH FUNCTIONS
#include <math.h>
double a = sqrt(16);
double b = pow(9,2);
int c = round(3.1416);
int d = ceil(3.01);
int e = floor(3.998);
double f = fabs(-45);
double g = log(3);
const double PI = 3.14159;
double h = sin(PI/6);
double i = cos(PI/3);
double j = tan(PI/4);

printf("%.2lf", f);


//normal circle math
#include <stdio.h>
const double PI = 3.1416;
double radius;
double circumference;
double area;

printf("Give me the radius of the circle. ");
scanf("%lf",&radius);

circumference = 2 * PI * radius;
area = PI * radius * radius;

printf("\nThe circumference of the circle is %lf.",circumference);
printf("\nThe area of the circle is %lf.",area);

return 0;


//hypotenuse of a right angle triangle
#include <stdio.h>
#include <math.h>

double a,B,c;
printf("Give me side a and b please. ");
scanf("%lf%lf",&a,&B);

c = sqrt(a*a + B*B);
printf("\nthe hypotenuse is %lf",c);
return 0;


//if else if else statements
#include <stdio.h>
double age;
printf("How old are you? ");
scanf("%lf",&age);

if(age >= 18){
   printf("\nNice. You can sign up.");
}
else if(age < 0){
   printf("\nYou haven't been born yet bro. ");
}
else if (age == 0){
   printf("\nMa man, you were born just now.");
}
else{
   printf("\nYou are too young to sign up.");
}
return 0;


//switch statements
char grade;

printf("Please tell us your grade. ");
scanf("%c",&grade);

switch(grade){

   case 'A':
   printf("Wow! U got an A!!\n ");
   break;
   case 'B':
   printf("Very good.\n ");
   break;
   case 'C':
   printf("Not bad not bad.\n ");
   break;
   case 'D':
   printf("Well, it's not THAT bad r8?\n ");
   break;
   case 'E':
   printf("Hey at least u passed!\n ");
   break;
   case 'F':
   printf("Bro u failed mthfkr. Shame on u dawg.\n ");
   break;
   default:
   printf("Bitch give valid input.\n ");
}
return 0;


//Temperature Conversion
#include <stdio.h>
/*#include <ctype.h>*/


char unit;
float temp;

printf("\nSo u wanna start with (C) or (F)? ");
scanf("%c",&unit);
unit = toupper(unit);

if(unit == 'C'){
    printf("\nEnter the value in celcius: ");
    scanf("%f",&temp);
    temp = (temp/5)*9+32;
    printf("The temp in F is %.2f.",temp);
}
else if(unit == 'F'){
    printf("\nEnter value in farenheight: ");
    scanf("%f",&temp);
    temp=(temp-32)/9*3;
    printf("The temp in celcius is %.2f. ",temp);

}
else{
    printf("Give valid input. ");

}
return 0;


//Making a Calculator
char operator;
double num_1;
double num_2;

printf("Please give an operator among these (+ - * /): ");
scanf("%c",&operator);

switch(operator){
    case '+':
    printf("Enter number 1: ");
    scanf("%lf",&num_1);
    printf("Enter number 2: ");
    scanf("%lf",&num_2);
    printf("\nThe result is: %lf",num_1 + num_2);
    break;

    case '-':
    printf("Enter number 1: ");
    scanf("%lf",&num_1);
    printf("Enter number 2: ");
    scanf("%lf",&num_2);
    printf("\nThe result is: %lf",num_1 - num_2);
    break;

    case '*':
    printf("Enter number 1: ");
    scanf("%lf",&num_1);
    printf("Enter number 2: ");
    scanf("%lf",&num_2);
    printf("\nThe result is: %lf",num_1 * num_2);
    break;

    case '/':
    printf("Enter number 1: ");
    scanf("%lf",&num_1);
    printf("Enter number 2: ");
    scanf("%lf",&num_2);
    printf("\nThe result is: %lf",num_1 / num_2);
    break;

    default:
    printf("Unknown operator (%c)",operator);
    break;

}
return 0;


//Logical AND Operator

#include <stdio.h>
#include <stdbool.h>


float temp;
bool sunny = true;

printf("How's the temperature? ");
scanf("%f",&temp);

if(temp<=20 && temp>=0 && sunny){
printf("It's sunny.");
}
else{
    printf("It's not.");
}


//Logical OR Operator

float temp;

scanf("%f",&temp);

if(temp<=0 || temp>=50){
   printf("The weather is bad.");

}
else {
   printf("The weather is good.");

}
return 0;


//Logical NOT Operator
bool sunny = true;

if(!sunny){
   printf("It's sunny outside.");
}
else{
   printf("It's cloudy outside.");

}


//FUNCTION


//Arguments


//Return Statement


//Ternary/Conditional Operator


//Function Prototype


//String Function


//For Loop

for(int i = 1; i<=10; i+=3)
{
   printf("Test\n");
   printf("%d",&i);
}


//While loop

char name [50];
printf("\nWhat's your name? ");
fgets(name,50,stdin);
name[strlen(name)-1] = '\0';

while(strlen(name)==0){
printf("You did not enter your name.\n");
printf("\nWhat's your name? ");
fgets(name,50,stdin);
name[strlen(name)-1] = '\0';
}
printf("Hello %s!\n",name);


//Do While loop

int number = 0;
int sum = 0;

do{
   printf("\nEnter a number: ");
   scanf("%d",&number);
   sum += number;
}while(number>0);
printf("Sum = %d/n",sum);


//Nested for Loop

    char symble;
    int row,column;
    printf("Enter number of column: ");
    scanf("%d",&column);
    printf("Enter number of row: ");
    scanf("%d",&row);
    scanf("%c",&symble);
    printf("Enter a symble: ");
    scanf("%c",&symble);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            printf("%c",symble);
        }
        printf("\n");
    }


//Continue & Break in loop

for(int i = 0; i<=20; i++){
   if(i==13){
      continue;
   }
   printf("%d",i);
}

for(int i = 0; i<=20; i++){
   if(i==13){
      break;
   }
   printf("%d",i);
}


//swap values

char x[15] = "Tamim";
char y[15] = "Omar";
char temp[15];

strcpy(temp,x);
strcpy(x,y);
strcpy(y,temp);
printf("x = %s\ny = %s",x,y);


//
}