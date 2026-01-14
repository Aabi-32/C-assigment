#include<stdio.h>


// Global variables

int s=3; // for the number of students
int m=4;  // for the number of marks for every student


// All function needed for the programm

void enterStudent( int students[s][m]);
void display( int students[s][m],float totals[s], char grades[s], float averages[s]);
void calculateTotal(  int std[s][m], float totals[s]);
void findAverage(   float totals[s], float averages[s]);
void findGrade( float averages[s], char grades[s]);


int main()
{
   

    // Here we devine the arrays needed for the students info 
   int students[s][m];
   float totals[s];
   char grades[s];
   float averages[s];

   // Here we call the function of to calculate it 
   enterStudent(students);
   calculateTotal(students,totals);
   findAverage(totals,averages);
   findGrade(averages,grades);
   display(students,totals,grades,averages);
  
    return 0;
}

// function to get the info 
void enterStudent( int students[s][m]){
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

// function to print 
void display( int students[s][m],float totals[s], char grades[s], float averages[s])

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
       printf("Student %d Total Marks is: %f  \n", i+1, totals[i]);
       printf("Student %d Average Marks is: %f  \n", i+1, averages[i]);
       printf("Student %d Grade is: %c  \n", i+1, grades[i]);

    }
}
// function to calculate Total marks
void calculateTotal(  int std[s][m], float totals[s])
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

// total to calculate the average 
void findAverage(  float totals[s], float averages[s])
{
       for(int i=0; i<s; i++)
      {
        averages[i] = totals[i] / m;
      }
}

// function to find the Student Grade
void findGrade( float averages[s], char grades[s])
{
    for (int i = 0; i < s; i++)
    { 
        
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
