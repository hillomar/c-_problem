#include <stdio.h>
#include <string.h>

struct player
{
    char name[20];
    int score;
};

int main(){
    struct player player1;
    struct player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Bruh");
    player2.score = 5;

    printf("%s - ",player1.name);
    printf("%d\n",player1.score);
    printf("%s - ",player2.name);
    printf("%d\n",player2.score);
}


//TypeDef

typedef struct{
char name[25];
char password[12];
int id;
} user;

int main(){
    user user1 = {"Bro","nice_12",1234};
    user user2 = {"Nigga","got_34",9876};

    
    printf("%s\n%s\n%d\n",user1.name,user1.password,user1.id);
    printf("\n%s\n%s\n%d\n",user2.name,user2.password,user2.id);
}


//Array of Struct

typedef struct{
    char name[12];
    float gpa;
} student;

int main(){
    student student1 = {"Tamim",3.2};
    student student2 = {"Omar",3.5};
    student student3 = {"Raz",3.7};
    student student4 = {"Rokib",3.6};

    student students[] = {student1,student2,student3,student4};

    for(int i = 0;i<sizeof(students)/sizeof(students[0]);i++){
        printf("%-12s\t",students[i].name);
        printf("%.2f\n",students[i].gpa);
    }

}


//Enums

enum day{sun,mon,tue,wed,thu,fri,sat};

int main(){
    enum day today;
    
    today = sat;

    if(today == sat || today==fri){
        printf("Yo it's chill day!!\n");
    }
    else{
        printf("Oh sh*t, here we go again.\n");
    }
}