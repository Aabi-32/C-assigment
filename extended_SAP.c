#include<stdio.h>

// global variables 
int s=3 ;  // number of students

struct Student{

    int id;
    char name[20];
    int marks[6];
    float total;
    float average;
    char grade;
    int year;
    
};

// function area
void  acceptStudents(struct Student st[]);
void  calTotal(struct Student st[]);
void  calAverage(struct Student st[]);
void  calGrade(struct Student st[]);
void  findTopStudent(struct Student std[], int *topper);
void display(struct  Student std[], int *topper);

int main()
{
    int topper;
    struct Student student[s];

    acceptStudents(student);
    calTotal(student);
    calAverage(student);
    calGrade(student);
    findTopStudent(student, &topper);
    display(student, &topper);

   


    return 0;

}

void  calTotal(struct Student st[])
{
     
    for (int i = 0; i < s; i++)
    {
        st[i].total=0;
       for (int j = 0; j < 6; j++)
       {
          st[i].total += st[i].marks[j];
       }
       
        
    }
    
}
void  acceptStudents(struct Student st[])
{
    for (int i = 0; i < s; i++)
    {
         st[i].average=0;
         //st[i].grade=' ';


          printf("Enter the Student ID: \n");
          scanf("%d", &st[i].id);

          printf("Enter the Student Name: \n");
          scanf("%s", st[i].name);

          printf("Enter the Student's year of entery: \n");
          scanf("%d", &st[i].year);

          printf("Enter the Marks : \n");

        for (int j = 0; j < 6; j++)
        {
            printf(" Enter Subject %d:  ", j+1);
            scanf("%d", &st[i].marks[j]);
        }

        printf("-------------------------------------------------\n ");
        printf("--------STUDENT INFO SECCESSFULY INSERTED-------- \n");
        
    }
    
}
void  calAverage(struct Student st[])
{
    
    for (int i = 0; i < s; i++)
    {
        st[i].average = st[i].total/6;   
    }
}
void  calGrade(struct Student st[])
{
    for (int i = 0; i < s; i++)
    { 
      
        if(st[i].average>=80)
        {
             st[i].grade='A';
        }
        else if( st[i].average<80 &&  st[i].average>=65)
        {
             st[i].grade='B';
        }
         else if( st[i].average<65 &&  st[i].average>=50)
        {
             st[i].grade='C';
        }
         else
        {
             st[i].grade='D';
        }
}
}
void  findTopStudent(struct Student std[], int *topper)
{
    *topper= 0;
    float largest=0;
      
    for (int i = 0; i < s; i++)
    {
        if (std[i].total>largest)
        {
           *topper=i;
        }
       
    }
    
   
}
void display(struct  Student std[], int *topper)
{
   
    printf("=============================================================================== \n \n ");
    
       for(int i=0; i<s; i++)
    {
            printf("----------------------------------------------------------- \n ");
            printf("The Student ID is %d : ", std[i].id );
            printf("The Student year of entery is %d :  \n", std[i].year );
            printf("The Marks for %s : Are \n", std[i].name );
     
      for(int j=0; j<6; j++)
      {
        printf("Subject: %d is -> %d \n", j+1 ,std[i].marks[j]);
      }
       printf("Student %d Total Marks is: %.2f  \n", i+1, std[i].total);
       printf("Student %d Average is: %.2f  \n", i+1, std[i].average);
       printf("Student %d Grade is: %c  \n", i+1, std[i].grade);

}

 printf(" \n =====================This year Award goes to============== \n");
    printf("################   %s   ################ ", std[*topper].name);

}

