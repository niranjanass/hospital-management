

#include <stdio.h>
#include <conio.h>
#include<string.h>
#include<stdlib.h>

static int token[8] ={3,3,10,56,89,76,11,99};

struct hos
{ 
 char name[20];
 int phno;
 char address[50];
 int door;
 char street;
 char city;
 char coun;
 char fathername[50];
 char sex[20];
 char bloodgroup[20];
 int registrationno;
 char dis[30];
 int age;
 }s[100];
 
void view();
void search();
void delete();
void add();
void display();
void medical();
void menu()
{ 
int ch;

printf("\n *************************************************");
 
 printf("\n \t WELCOME TO 'MOTHER TERESA HOSPITAL' ");
 printf("\n *************************************************");

printf("\n\n\t1.ADD NEW PATIENT");
printf("\n\n\t2.SEARCH PATIENT INFORMATION");
printf("\n\n\t3.REMOVE PATIENT");
printf("\n\n\t4.exit ");
printf("\n\n\tEnter your choice(1,2,3,4)");
scanf("%d",&ch);
switch(ch)
{ 
 case 1:
 	add();
 	getch();
 	menu();
 	break;
 case 2: 	
 	search();
 	getch();
 	menu();
 	break;
 case 3:
 	delete();
 	getch();
 	menu();
 	break;
case 4 :
	exit(1);
	break; 
}
}
void search()
{
 int i,j;
 char regno;
 char ch;
 printf("\nEnter the regno no");
 scanf("%s",&regno);
for(i=0;i<100;i++)
  if(regno==s[i].registrationno)
 { 
 printf("\n!!!!!!!!RECORD FOUND!!!!!!!!!");
 
 	
 printf("\n");
 printf("\n NAME:\t");
 printf(s[i].name);
 printf("\nFATHER NAME:\t");
 printf(s[i].fathername);
 printf("\n PHONE NUMBER:\t");
 
 printf(s[i].phno);
 
 printf("\nADDRESS:\t");
 printf("\n Door no:");
 printf(s[i].door);
 
 printf("\n Street name:");
 printf(s[i].street);
 printf("\n City name:");
 printf(s[i].city);
 
 printf("\n Country:");
 printf(s[i].coun);
  printf("\n BLOOD GROUP:\t");

 printf(s[i].bloodgroup);
  printf("\n Enter the age:");
 printf(s[i].age);
 
 
 i=100;
 }
 else
 {
 printf("\n registrationno is not matched");
 getch();
 menu();
}
}
void add()
{
 int ch;
 int i;
 FILE*fp ;
 fp = fopen("new.txt","a");
 //int strcmp(const char *doc, const char ger);


// printf("how much record you want to enter");
 for( i=0;i<2;i++)
 {
 printf("\n Enter the name:");
 scanf("%s",&s[i].name);

 
 printf("\n Enter the address:");
 printf("\n \t");
 printf("\n Door no:");
 scanf("%d",&s[i].door);
 printf("\n Street name:");
 scanf("%s",&s[i].street);
 printf("\n City name:");
 scanf("%s",&s[i].city);
 
 
 
 printf("\n Enter the father's name:");
 scanf("%s",&s[i].fathername);
 
 printf("\n Enter the sex (M.male/F.female):");
 scanf("%s",s[i].sex);
 
 
 printf("\n Enter the blood group:");
 scanf("%s",s[i].bloodgroup);

 
 printf("\n Enter the registration no:");
 scanf("%d",&s[i].registrationno);
 
 printf("\n Enter the disease for which the patient was admitted:");
 scanf("%s",s[i].dis);
 
 printf("\n Enter the age:");
 scanf("%d",&s[i].age);
 
 printf("which doctor would u like to prefer ?");
 	int choice;
 	
 	printf("\n 1.General physician");
 	printf("\n 1.Pediatric");
 	printf("\n 2.Orthopedic");
 	printf("\n 3.Dermatologist");
 	printf("\n 4.Cardiologist");
 	printf("\n 5.Dentist");
 	printf("\n 6.Neurologists");
 	printf("\n 7.Gynecologists");
 	printf("\n enter your need(1,2,3,4,5,6,7,8)");
 	scanf("%d",&choice);
 	switch(choice){
 		case 1:
 			printf("\n Name: Dr. Gopal Singh Dhanik");
 			printf("\n");
 			printf("\n Available day:  monday");
 			printf("\n");
 			printf("\n Consulting time:  8.00am -12.00am");
 			printf("\n");
 			printf("\n No of tokens available are=%d",token[0]);
 			printf("\n");
 			if(token[0] != 0 ){			 
 			printf("\n Do you want to fix an appointment? \n Enter 1 to confirm your appoinment");
 			printf("\n");
 			scanf("%d",&ch);
 			if(ch== 1)
 			{			 
			 token[0]-- ;
 			printf("\nyour appointment is fixed");
 				
			} 
		}
			else
			{
				printf("\n appointment is not available");
			}
 			break;
 			
 			case 2:
 			printf("\n Name:\t Dr. Vivek Saxena");
 			printf("\n");
 			printf("\n Available day: \t tuesday and thursday");
 			printf("\n");
 			printf("\n Consulting time: \t 10.00am -2.00pm");
 			printf("\n");
 			printf("\n Number of tokens available are=%d",token[1]);
 			printf("\n");
 			if(token[1]!=0){
 				printf("\nDo you want to fix an appointment \n Enter 1 to confirm your appoinment");
 				printf("\n");
 				scanf("%d",&ch);				 				

 				if(ch==1){
 					token[1]--;
 					printf("\n Your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n Appointment is not available");
			}		
 			break;
 			
 			case 3:
 			printf("\n Name:\t Dr. Nadeem Faruqui ");
 			printf("\n");
 			printf("\n Available day: \t tuesday");
 			printf("\n");
 			printf("\n Consulting time: \t 8.00am -5.00pm");
 			printf("\n");
 			printf("\nthe number of tokens available are=%d",token[2]);
 			printf("\n");
 				if(token[2]!=0){
 			printf("\nDo you want to fix an appointment  \n Enter 1 to confirm your appoinment");
 			printf("\n");
 		    scanf("%d",&ch);				 				

 				if(ch==1){
 					token[2]--;
 					printf("\n Your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n Appointment is not available");
			}		
 			break;
 			
 			case 4:
 			printf("\n Name:\t Dr. Pravina Patel");
 			printf("\n");
 			printf("\n Available day: \t wednesday");
 			printf("\n");
 			printf("\n Consulting time: \t 10.00am -2.00pm");
 			printf("\n");
 			printf("\n Number of tokens available are=%d",token[3]);
 			printf("\n");
 			if(token[3]!=0){			 
 			printf("\nDo you want to fix an appointment \n  Enter 1 to confirm your appoinment");
 			printf("\n");
 		    scanf("%d",&ch);				 				

 				if(ch==1){
 					token[3]--;
 					printf("\n your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n appointment is not available");
			}		
 			
 			break;
 			case 5:
 			printf("\n Name:\t Dr. Bhupendra Kumar");
 			printf("\n");
 			printf("\n Available day: \t thursday");
 			printf("\n");
 			printf("\n Consulting time: \t 8.00am -12.00am");
 			printf("\n");
 			printf("\nthe number of tokens available are=%d",token[4]);
 			printf("\n");
 			if(token[4]!=0){			 
 			printf("\ndo you want to fix a appointment \n enter 1 to confirm your appoinment");
 			printf("\n");
 		    scanf("%d",&ch);				 				

 				if(ch==1){
 					token[4]--;
 					printf("\n your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n appointment is not available");
			}	
 			break;
 			
 			case 6:
 			printf("\n Name:\t Dr. Sanjai Rastogi ");
 			printf("\n");
 			printf("\n Available day: \t friday");
 			printf("\n");
 			printf("\n Consulting time: \t 4.00pm -10.00pm");
 			printf("\n");
 			printf("\n Number of tokens available are=%d",token[5]);
 			printf("\n");
 			if(token[5]!=0){
 				
 			printf("\ndo you want to fix a appointment \n enter 1 to confirm your appoinment");
 		    scanf("%d",&ch);				 				

 				if(ch==1){
 					token[5]--;
 					printf("\n your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n appointment is not available");
			}		
 			break;
 			
 			case 7:
 			printf("\n Name:\t Dr. Shubha Agarwal");
 			printf("\n");
 			printf("\n Available day: \t all days");
 			printf("\n");
 			printf("\n Consulting time: \t 10.00am -10.00pm");
 			printf("\n");
 			printf("\nthe number of tokens available are=%d",token[6]);
 			printf("\n");
 			if(token[6]!=0){
 			printf("\ndo you want to fix a appointment \n  enter 1 to confirm your appoinment");
 			printf("\n");
 		    scanf("%d",&ch);				 				

 				if(ch==1){
 					token[6]--;
 					printf("\n your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n appointment is not available");
			}		
 			break;
 			
 			case 8:
 			printf("\n Name:\t Dr.Uma Rani");
 			printf("\n");
 			printf("\n Available day: \t monday,wednesday,friday");
 			printf("\n");
 			printf("\n Consulting time: \t 10.00am -10.00pm");
 			printf("\n");
 			printf("\n Number of tokens available are=%d",token[7]);
 			printf("\n");
 			if(token[7]!=0){
 			printf("\ndo you want to fix a appointment \n enter 1 to confirm your appoinment");
 			printf("\n");
 		    scanf("%d",&ch);				 				

 				if(ch==1){
 					token[7]--;
 					printf("\n your appoinment is fixed");
				 }
			 }
 			else
			{
				printf("\n appointment is not available");
			}		
 			break;
	 }
 
 
 
 fprintf(fp,"NAME:%s\n FATHER NAME: %s\n SEX: %s\n BLOOD GROUP: %s\n REGISTER NO.: %d\n AGE: %d\n DISEASE:%s",s[i].name,s[i].fathername,s[i].sex,s[i].bloodgroup,s[i].registrationno,s[i].age,s[i].dis);
 fclose(fp);
 

 printf("\nDo you want to add more record");
 scanf("%c",&ch);
 if(ch!='y')
 
 break;
 
 }
}
void delete()
{
 int i,regno;
 int ch;
printf("enter the regno no");
scanf("%d",&regno);
for(i=0;i<100;i++)
 if(regno==s[i].registrationno)
 { 
 printf("\nAre you sure you want to delete this record");
 printf("press 1 to delete your records ???");
 scanf("%d",&ch);
 if(ch==1)
 {
 printf("\nyour record is deleted");
}
 getch();
 menu();
 }
 else
 {printf("registration no not matched");
 getch();
 menu();
}
}
void main()
{
 
 getch();
 menu();
 }

