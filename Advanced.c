// this one hass parent class


#include<stdio.h>

#define MAX_NUM 50

struct Class{
    int nos;
    char className[20];
    float classAverage;
    struct Student std[MAX_NUM];
};


struct Student
{
    int id;
    char name[20];
    int marks[6];
    float total;
    float average;
    char grade;
    int year;
};

void  setNum(struct  Class *s);
void  acceptStudents(struct Class *s);
void  calTotal(struct Class *s);
void  calAverage(struct Class *s);
void  calGrade(struct Class *s);
void  findTopStudent(struct Class *s, int *topper);
void  display(struct  Class *s, int *topper);


int main()
{



    return 0;

}



void  setNum(struct  Class *s);
void  acceptStudents(struct Class *s);
void  calTotal(struct Class *s);
void  calAverage(struct Class *s);
void  calGrade(struct Class *s);
void  findTopStudent(struct Class *s, int *topper);
void  display(struct  Class *s, int *topper);
