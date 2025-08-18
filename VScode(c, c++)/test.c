#include <stdio.h>

struct student_info{
    char name[50];
    int id;
    float gpa;
};

void bonus(struct student_info student[5]){
    for(int i = 0;i<5;i++){
        if(student[i].gpa<2.5){
            student[i].gpa+=1.00;
        }
    }
}

int main(){
    struct student_info student[5];

    for(int i = 0;i<5;i++){
        scanf("%s",student[i].name);
        scanf("%d",&student[i].id);
        scanf("%f",&student[i].gpa);
    }
    bonus(student);
    for(int i = 0;i<5;i++){
        printf("\n%s ",student[i].name);
        printf("%d ",student[i].id);
        printf("%.2f\n",student[i].gpa);
    }
}