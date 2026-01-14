#include<stdio.h>
// this code is also availabe at my the github repo https://github.com/Aabi-32/C-assigment.git 


// ----> global variables
int s;  //---->>  for the number of students
int m;  //----->> for the number of marks for every student

void acceptStudent( int students[s][m]);
void Print( int students[s][m],float totals[s], char grades[s], float averages[s]);
void CalTotal(  int std[s][m], float totals[s]);
void CalAverage(   float totals[s], float averages[s]);
void findGrade( float averages[s], char grades[s]);


int main()
{
   
    printf("how many students you want to Enter: ");
    scanf("%d", &s);
     printf("how many Marks you want to Enter for Every student: ");
    scanf("%d", &m);
    
   int students[s][m];
   float totals[s];
   char grades[s];
   float averages[s];


   acceptStudent(students);
   CalTotal(students,totals);
   CalAverage(totals,averages);
   findGrade(averages,grades);
   Print(students,totals,grades,averages);
  


  
    return 0;
}

// function to get the info 
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

// function to print the info at the end
void Print( int students[s][m],float totals[s], char grades[s], float averages[s])

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
// function to calculate the total of the marks 
void CalTotal(  int std[s][m], float totals[s])
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

// total to calculate the average of the student
void CalAverage(  float totals[s], float averages[s])
{
       for(int i=0; i<s; i++)
      {
        averages[i] = totals[i] / m;
      }
}

// function to find the grade based on the average
void findGrade( float averages[s], char grades[s])
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