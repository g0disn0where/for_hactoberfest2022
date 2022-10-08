//wap to find factorial of no 
//wap to print all no b/w 10 & 20
//wap to print sum of first n natural no using while
//wap to sum 2 matrices
//wap to find sum and prod of elements of 2d array
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
   int arrA[3][3];
   int arrB[3][3];
   int arrC[3][3];
   printf("Enter First Matrix\n");
   for(int i =0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         scanf("%d",&arrA[i][j]);
      }
   }
   printf("Enter Sec Matrix\n");
   for(int i =0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         scanf("%d",&arrB[i][j]);
      }
   }
   for(int i =0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         arrC[i][j] = arrA[i][j]+arrB[i][j];
      }
   }
   printf("Resultant matrix = \n");
   for(int i =0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         printf("%d",arrC[i][j]);
         printf(" ");
      }
      printf("\n");
   }
}






























// int main() addition
// {
//    int a,sum =0;
//    while(1)
//    {
//         scanf("%d", &a);
//         if(!a)
//         break;
//         else
//         sum+=a;
//    }        
//    printf("%d",sum);     
// }

// int rec(int n)
// {
//         if(!n)
//         return 1;
//         else
//         return 3*rec(n-1);
// }
// int main()
// {
//         int a  = 7;
//         printf("%d" , rec(a));
//         return 0;
// } 

//2d array + Transpose of matrix
// int main()
// {
//         int vect[3][3];
//         int tempon[3][3];
//         for(int i = 0; i< 3; i++)
//         {
//                 for(int j =0; j<3;j++)
//                 {
//                         int temp;
//                         scanf("%d", &temp);
//                         tempon[i][j] = temp;
//                         vect[i][j] = temp;
//                 }
//         }
//         for(int i = 0; i< 3; i++)
//         {
//                 for(int j =0; j<3;j++)
//                 {
//                         printf("%d",vect[i][j]);
//                         printf(" ");
//                 }
//                 printf("\n");
//         }
//         for(int i = 0; i< 3; i++)
//         {
//                 for(int j =0; j<3;j++)
//                 {
//                         if(i != j)
//                         vect[i][j] = tempon[j][i];
//                 }
//                 printf("\n");
//         }
//         for(int i = 0; i< 3; i++)
//         {
//                 for(int j =0; j<3;j++)
//                 {
//                         printf("%d",vect[i][j]);
//                         printf(" ");
//                 }
//                 printf("\n");
//         }
//         return 0;
// }    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    