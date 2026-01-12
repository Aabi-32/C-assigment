#include<stdio.h>

void acceptStudent(int s, int m, int students[s][m]){
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

void Print(int s, int m, int students[s][m],int totals[s], char grades[s])

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
       printf("Student %d Grade is: %c  \n", i+1, grades[i]);

    }
}

void CalTotal( int s, int m, int students[s][m], int totals[s])
{
       for(int i=0; i<s; i++)
    {
        totals[i]=0;

      for(int j=0; j<m; j++)
      {

        totals[i] += students[i][j];
       
      }
      
    }
}


void CalAverage( int s, int m,  int totals[s], int averages[s])
{
       for(int i=0; i<s; i++)
      {
        averages[i]= 0;
    
       for(int j=0; j<m; j++)
      {
            averages[i]= totals[i]/j;
       
      }
  
}
}

void findGrade(int s, int averages[s], char grades[s])
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
    int s;
    int m;
    printf("how many students you want to Enter: ");
    scanf("%d", &s);
     printf("how many Marks you want to Enter for Every student: ");
    scanf("%d", &m);
    
   int students[s][m];
   int totals[s];
   char grades[s];
   int averages[s];


   acceptStudent(s,m,students);
   CalTotal(s,m ,students,totals);
   CalAverage(s,m,totals,averages);
   findGrade(s,averages,grades);
   Print(s,m,students,totals,grades);
  


  
    return 0;
}