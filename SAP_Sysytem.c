#include<stdio.h>
// this code is also availabe at my the github repo https://github.com/Aabi-32/C-assigment.git 
// global variables
int s;
int m;
void acceptStudent( int students[s][m]){
    for(int i=0; i<s; i++)
    {
      printf(" for Student: %d \n", i+1);

      for(int j=0; j<m; j++)
      {
        printf("Enter The marks for subject: %d \n", j+1);
        scanf("%d",&students[i][j]);
      }
    }

}

void Print( int students[s][m],int totals[s], char grades[s], int averages[s])

{
    printf("=============================================================================== \n \n ");
       for(int i=0; i<s; i++)
    {
          printf("-----------------------------------------------------------  ");
            printf("----------------------------------------------------------- \n ");
      printf("The Marks for Student: %d Are \n", i+1);
     


      for(int j=0; j<m; j++)
      {
        printf("Subject: %d is -> %d \n", j+1 ,students[i][j]);
       
      }
       printf("Student %d Total Marks is: %d  \n", i+1, totals[i]);
       printf("Student %d Average Marks is: %d  \n", i+1, averages[i]);
       printf("Student %d Grade is: %c  \n", i+1, grades[i]);

    }
}

void CalTotal(  int std[s][m], int totals[s])
{
       for(int i=0; i<s; i++)
    {
        totals[i]=0;

      for(int j=0; j<m; j++)
      {

        totals[i] += std[i][j];
       
      }
      
    }
}


void CalAverage(   int totals[s], int averages[s])
{
       for(int i=0; i<s; i++)
      {
        averages[i] = totals[i] / m;
      }
}

void findGrade( int averages[s], char grades[s])
{
    for (int i = 0; i < s; i++)
    { 
        grades[i]= ' ';
        if(averages[i]>=80)
        {
             grades[i]='A';
        }
        else if( averages[i]<80 &&  averages[i]>=65)
        {
             grades[i]='B';
        }
         else if( averages[i]<65 &&  averages[i]>=50)
        {
             grades[i]='C';
        }
         else
        {
             grades[i]='D';
             
        }
       
    }
    
}

int main()
{
   
    printf("how many students you want to Enter: ");
    scanf("%d", &s);
     printf("how many Marks you want to Enter for Every student: ");
    scanf("%d", &m);
    
   int students[s][m];
   int totals[s];
   char grades[s];
   int averages[s];


   acceptStudent(students);
   CalTotal(students,totals);
   CalAverage(totals,averages);
   findGrade(averages,grades);
   Print(students,totals,grades,averages);
  


  
    return 0;
}