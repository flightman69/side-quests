#include <stdio.h>
 
int main()
{
    int number, i, k, count = 1;
 
    printf("Enter number of rows\n");
    scanf("%d", &number);
    count = number - 1;
    for (k = 1; k < number; k++)
    {
        for (i = 1; i <= count+1; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++){
	    if(i == k){
		    printf("%d",(k-1)%10);
	    }else{
            printf("*");
	    }
	}
        printf("\n");
     }
     printf(" ");	
     for(int s = 0;s<number*2-1;s++){
     	printf("%d",s%10);
     } 
     printf("\n");
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count+1; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2 *(number - k)-  1; i++){
	     if(i == number-k){
	         printf("%d",(number-k-1)%10);
		}else{		
             printf("*");
		}
	}
         printf("\n");
      }
      return 0; 
}
