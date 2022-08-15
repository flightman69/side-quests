#include <stdio.h>
 
int main()
{
    int number, i, k, count = 1;
 
    printf("Enter number of rows\n");
    scanf("%d", &number);
    count = number - 1;
	// Printing the upper triangle of the diamond
    for (k = 1; k < number; k++)
    {
        for (i = 1; i <= count+1; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++){
	    if(i == k){ // Printing numbers in the middle of upper triangle
		    printf("%d",(k-1)%10);
	    }else{
            printf("*");
	    }
	}
        printf("\n");
     }
     printf(" ");	
	 // Printing numbers in the middle of the diamond
     for(int s = 0;s<number*2-1;s++){
     	printf("%d",s%10);
     } 
     printf("\n");
     count = 1;
	 // Printing the lower triangle of the diamond
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count+1; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2 *(number - k)-  1; i++){
	     if(i == number-k){ // Printing the numbers in the middle of lower triangle
	         printf("%d",(number-k-1)%10);
		}else{		
             printf("*");
		}
	}
         printf("\n");
      }
      return 0; 
}
