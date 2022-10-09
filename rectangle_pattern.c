#include<stdio.h>
int main()
{
int i,j,l;    //declaring integers i,j for loops and l for the number of rows
printf(" Enter the number of rows\n");   //Asking user for input
scanf("%d",&l);   //taking input for number of rows and saving in variable l
for(i=0;i<l;i++) //Outer loop for number of rows
   {
      for(j=0;j<l;j++) //Inner loop for printing stars in each column of a row
         {
            if(i==0 || i==l-1 || j==0 || j==l-1) // condition for printing stars
               {
                  printf("*");   // printing stars
               }
            else                 // else condition to print spaces 
               {
                  printf(" ");   //printing spaces
               }
         }
      printf("\n");       //Printing a new line after a row has been printed
   }
}
