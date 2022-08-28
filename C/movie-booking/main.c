#include<stdio.h>

int main(){
char movies[4][30] =  {"[1] Thiruchitrambalam 93%❤","[2] Viruman 74%❤","[3] Sita Raman 92%❤","[4] Vikram 101%❤"};
int option;
printf("****************************************************\n\tWelcome to Black Ticket booking app\n***************************************************\n");
printf("Recommended Movies\n");
//printf("[1] Thiruchitrambalam 93%❤\n[2] Viruman 74%❤\n[3] Sita Raman 92%❤\n[4]Vikram 101%❤\n");
printf("%s\n%s\n%s\n%s\n",movies[0],movies[1],movies[2],movies[3]);
printf("Enter your movie option :  ");
scanf("%d",&option);

switch(option){
	case 1:
			screens(movies[0]);
			break;
	case 2:
			screens(movies[1]);
			break;
	case 3:
			screens(movies[2]);
			break;
	case 4:
			screens(movies[3]);
			break;
	default:
			printf("\nInvalid Option!, choose an valid movie option\nFor example 2 for Viruman\n");
	}
}

int screens(char mov[40]){
int timing,number;
int theatre,tickets;
char name[20],seat[5];
printf("Shows available for %s\n\n",mov);
char timings[20][20] = {"10:00 AM","1:00 PM", "5:30 PM","7:00 PM", "10:00 PM", "12:30 PM", "9:30 AM", "12:45 PM", "2:00 PM","6:00 PM", "9:00 PM", "11:30 PM"};
printf("[1] Fun Mall :\t%s, %s, %s\n\t\t%s, %s %s\n\n",timings[0],timings[1],timings[2],timings[3],timings[4],timings[5]);
printf("[2] Brook Fields: %s, %s, %s\n\t\t  %s, %s %s\n\n",timings[6],timings[7],timings[8],timings[9],timings[10],timings[11]);
printf("Choose your Theatre : ");
scanf("%d",&theatre);
printf("Available Timings : \n");
switch(theatre){
	case 1:
		for(int i = 1;i<=6;i++){
			printf("[%d] %s\n",i,timings[i-1]);
			}
		break;
	case 2:
		for(int i=7;i<=12;i++){
			printf("[%d] %s\n",i-6,timings[i-1]);
			}
		break;
	}

printf("\nChoose Timings: ");
scanf("%d",&timing);
printf("How many tickets you want to buy ? Rs.200/ticket : ");
scanf("%d",&tickets);
print_screen();
printf("Which seat you want : ");
scanf("%s",&seat);
printf("\nEnter you Details to confirm your Booking.\n");
printf("Your name : ");
scanf("%s",name);
printf("Your mobile No: ");
scanf("%d",&number);

printf("\nThanks %s for booking %d tickets.\nConfirmation message has been sent your registered mobile number %d.\n",name,tickets,number);

}


void print_screen(){
	char row = 'A';
	for(int i=0;i<96;i++){
		if(i%12 == 0){
			printf("\n%c ",row);
			row ++;
		}
		if(i%3==0 && i%2!=0){
			printf("   ");
    }
		printf("|%2d|",(i%12)+1);		
	}
	printf("\n");
printf("\n\n\n\t|----------------------------------|");
printf("\n\t\t\tSCREEN\n\n\n");
						
}
