#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void password(void);
void returnfunCmenucard(void);
void returnfunc(void);
void mainmenu(void);
void administration(void);
void customer(void);

void addrecord(void);
void deleterecord(void);
void searchrecord(void);
void viewrecord(void);

void vegetarian(void);
void nonvegetarian(void);
void details(void);
void aboutus(void);
int getdata();



struct employee
{

	char name[30];
	int id;
	int dd; int mm; int yyyy;
	int YOJ;
	char place[20];
	float salary;
	char department[20];


	int quantity;
};





int main()
{
	mainmenu();
	return 0;
}




void mainmenu(void)
{
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("PLEASE ENTER TO THE FULL SCREEN\n\n\n");
    printf("\t\t\t\t\t                           ************************************************************************** \n\n\n");
    printf("\t\t\t\t\t                                                             HELLO                                     \n\n");
	printf("\t\t\t\t\t                                                     DON'T WAIT AT THE QUEUE                           \n\n");
	printf("\t\t\t\t\t                                                             USE ME                                    \n\n");
	printf("\t\t\t\t\t                                                      PLACE YOUR ORDER HERE                           \n\n\n");
    printf("\t\t\t\t\t                           ************************************************************************** \n\n\n");
    printf("\n\n\n\n");

    printf("\t\t\t\t\t                                                 Press ENTER to return to main menu                          ");

    e:
    if(getch()==13)


	system("cls");
    printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t                            **************************************************************************\n");
	printf("\t\t\t\t\t                                                              WELCOME                                 \n");
	printf("\t\t\t\t\t                                                         MISS_CHEF_KITCHEN                            \n");
    printf("\t\t\t\t\t                                                          37/5,WATAMAWATHA                            \n");
    printf("\t\t\t\t\t                                                         NAVINNA,MAHARAGAMA                           \n\n");

	printf("\t\t\t\t\t                             **************************************************************************\n\n\n\n\n");
	printf("\t\t\t\t\t      1. FOOD MENU--> \n\n       \t\t\t\t\t      2. PLACE AN ORDER--> \n\n    \t\t\t\t\t      3. CONTACT DETAILS--> \n\n    \t\t\t\t\t      4. Admins page--> \n\n\n   \t\t\t\t\t      5. Exit--> \n\n\n   \t\t\t\t\t      Enter Your Choice --->");



	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		 menucard();
	}

	else if(choice==4)
	{
		password();
	}


	else if(choice==2)
	{
		customer();
	}
	else if(choice==3)
	{
		aboutus();
	}
	else if(choice==5)
	{
		system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");
		exit(0);
	}
}



void menucard(void){
int cho;
system("cls");
printf("\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
printf("\t\t\t\t\t                                                       menu card                                                      \n\n");
printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
printf("\t\t\t\t       1. APPETIZERS\n\n     \t\t\t\t       2. BREAKFAST\n\n   \t\t\t\t       3. LUNCH\n\n   \t\t\t\t       4. DINNER\n\n\n\n    \t\t\t\t       5. Back to main menu\n\n\n\n     \t\t\t\t\t     Enter Your Choice --->  ");
scanf("%d",&cho);

if(cho==1)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
        printf("\t\t\t\t\t                                                     APPETIZERS                                                       \n\n");
        printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
		printf("\t\t\t\t\t                   FOOD ITEM                      PRICE         \n\n\n\n");
		printf("\t\t\t\t\t           1>  creamy soup                     Rs 300.00        \n\n");
		printf("\t\t\t\t\t           2>  Peanut Butter Popcorn           Rs 400.00        \n\n");
		printf("\t\t\t\t\t           3>  backed pineapple slices         Rs 200.00        \n\n");
		printf("\t\t\t\t\t           3>  creamy chicken soup             Rs 400.00        \n\n\n\n");
		returnfunCmenucard();

	}

	else if(cho==2)
	{
	    system("cls");
	    printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
        printf("\t\t\t\t\t                                                     BREAKFAST                                                       \n\n");
        printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
		printf("\t\t\t\t\t                   FOOD ITEM                             PRICE         \n\n\n\n");
		printf("\t\t\t\t\t           1>  ROS PAAN WITH BUTTER CHICKEN            Rs 200.00        \n\n");
		printf("\t\t\t\t\t           2>  STRING HOPPERS WITH CURIES              Rs 200.00        \n\n");
		printf("\t\t\t\t\t           3>  PITTU WITH CUEEIES                      Rs 200.00        \n\n");
		printf("\t\t\t\t\t           3>  RICE AND CURRY                          Rs 200.00        \n\n");
        returnfunCmenucard();

	}


	else if(cho==3)
	{
        system("cls");
        printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
        printf("\t\t\t\t\t                                                     LUNCH                                                       \n\n");
        printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
		printf("\t\t\t\t\t                   FOOD ITEM                             PRICE         \n\n\n\n");
		printf("\t\t\t\t\t           1>  FRIED RICE - CHICKEN                    Rs 250.00        \n\n");
		printf("\t\t\t\t\t           2>  FRIED RICE - FISH                       Rs 250.00        \n\n");
		printf("\t\t\t\t\t           3>  FRIED RICE - EGG                        Rs 250.00        \n\n");
		printf("\t\t\t\t\t           4>  RICE AND CURRY                          Rs 200.00        \n\n");
        printf("\t\t\t\t\t           5>  BIRIYANI                                Rs 300.00        \n\n");
        returnfunCmenucard();
	}
	else if(cho==4)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
        printf("\t\t\t\t\t                                                     DINNER                                                       \n\n");
        printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
		printf("\t\t\t\t\t                   FOOD ITEM                             PRICE         \n\n\n\n");
		printf("\t\t\t\t\t           1>  FRIED RICE - CHICKEN                    Rs 250.00        \n\n");
		printf("\t\t\t\t\t           2>  FRIED RICE - FISH                       Rs 250.00        \n\n");
		printf("\t\t\t\t\t           3>  FRIED RICE - EGG                        Rs 250.00        \n\n");
		printf("\t\t\t\t\t           4>  RICE AND CURRY                          Rs 200.00        \n\n");
        printf("\t\t\t\t\t           5>  BIRIYANI                                Rs 300.00        \n\n");
        returnfunCmenucard();
	}
	else if(cho==5)
	{
		 mainmenu();
	}
	else
	{
		printf("WRONG INPUT");
		menucard();
	}
printf("\n\n");


}
void administration(void)
{

	system("cls");
	printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                           WELCOME TO THE EMPLOYEE SECTION                                            \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
 	printf("\t\t\t\t\t          1. Add New Record\n\n\t\t\t\t\t          2. Search Record\n\n\t\t\t\t\t          3. Delete Record\n\n\t\t\t\t\t          4. View THe Records\n\n\t\t\t\t\t          5. View previous orders placed\n\n\t\t\t\t\t          6. Back To Main Menu \n\n\t\t\t\t\t             Enter Your Choice --->");
	int n;
	scanf("%d",&n);
    printf("\n\n");

	printf("\n\n");
	if(n==1)
	{
		addrecord();
	}
	else if(n==2)
	{
		searchrecord();
	}
	else if(n==3)
	{
		deleterecord();
	}
	else if(n==4)
	{
		viewrecord();
	}
		else if(n==5)
	{

		viewprevod();

	}
	else if(n==6)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !! PLease Re-enter The Correct Option");
		if(getch())
		administration();
	}

}

void addrecord(void)
{
	system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**************************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                                 ADD RECORD                                                               \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                               ADDING RECORD USING FILE HANDLING -- STILL IN PROGRESS                                        \n\n");

}

void deleterecord(void)
{

	system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                              DELETE RECORD                                                               \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                                DELETING RECORD USING FILE HANDLING -- STILL IN PROGRESS                                       \n\n");
}

void searchrecord(void)
{
	system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                               SEARCH RECORD                                                               \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                         SEARCHING RECORD USING FILE HANDLING -- STILL IN PROGRESS                                       \n\n");
}

void viewrecord(void)
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                               VIEW RECORD                                                               \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                          VIEW RECORD USING FILE HANDLING -- STILL IN PROGRESS                                           \n\n");

}

void viewprevod(void){
system("cls");
printf("\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
printf("\t\t\t\t\t                                                 PREVIOUS RECORDS                                                              \n\n");
printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
printf("\t\t\t\t\t                        VIEW PREVIOUS ORDER RECORDS USING FILE HANDLING -- STILL IN PROGRESS                             \n\n");

}

void returnfunCmenucard(void)
{
    {
		printf("\t\t\t\t PRESS ENTER TO GO BACK TO THE MANU CARD ");
    }
    e:
    if(getch()==13)
    menucard();
    else
    goto e;
}

void returnfuncmainmenu(void)
{
    {
		printf(" Press ENTER to return to main menu");
    }
    e:
    if(getch()==13)
    mainmenu();
    else
    goto e;
}


void returnfunc(void)
{
    {
		printf(" Press ENTER to return to main menu");
    }
    e:
    if(getch()==13)
    administration();
    else
    goto e;
}

int checkid(int c)
{

}

int getdata()
{

}

void customer(void)
{

	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************************\n\n");
	printf("\t\t\t\t\t\t\t                                        WELCOME                                                 \n\n");
	printf("\t\t\t\t\t\t\t************************************************************************************************\n\n\n");
	printf("\t\t\t\t\t                YOU ARE--->\n\n\t\t\t\t\t                1. Vegetarian\n\n\t\t\t\t\t                2. Non Vegetarian\n\n\t\t\t\t\t                      \n\n\t\t\t\t\t                3. Back To Main Menu\n\n\t\t\t\t\t                Enter Your Choice  -->");
	int k;
	scanf("%d",&k);
		int wait;

	if(k==1)
	{
		system("cls");
		vegetarian();
	}
	else if(k==2)
	{
		system("cls");
		nonvegetarian();
	}
	else if(k==3)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
		customer();
	}
}
void vegetarian(void)
{
	int choice;
	int again;
	int quantity;

	double price=0;
	printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                                  VEGETARIAN MENU                                                     \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                VIEW VEGITARIAN MENU BY RETRIVING DETAILS FROM FILES, USING FILE HANDLING - STILL IN PROGRESS          \n\n");

}
void nonvegetarian(void)
{
	int choice;
	int again;
	int quantity;
	double price=0;
	printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n");
    printf("\t\t\t\t\t                                                   Non Veg. Menu                                                      \n\n");
    printf("\t\t\t\t\t**********************************************************************************************************************\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t              VIEW NON - VEGITARIAN MENU BY RETRIVING DETAILS FROM FILES, USING FILE HANDLING - STILL IN PROGRESS      \n\n");


}


int psword = 12345;

int pword;

void password(void){
system("cls");
printf("\n\n\n\n\n\n\n\n");

printf("\t\t\t\t\t\t\t                           For Testing purposes PASSWORD = 12345 \n\n\n\n");
printf("\t\t\t\t\t\t\t************************************************************************************************\n\n");
printf("\t\t\t\t\t\t\t\t                                         LOGIN \n");
printf("\t\t\t\t\t\t\t************************************************************************************************\n\n");

printf("\t\t\t\t\t\t\t\t ENTER PASSWORD :-  ");
scanf("%d",&pword);


if(psword==pword){
  administration();
}
else if(psword!=pword){
    printf("\n");
    printf("USERNAME Or PASSWORD is incorrect");

}


}

void details(void)
{
	char name1[20];
	char name2[20];
	long long int phone;
	char address[40];
	char landmark[30];
	printf("Please Give Your Contact Details \n");
	printf(" First Name : ");
	scanf("%s",name1);
	printf("Last Name : ");
	scanf("%s",name2);
	printf("Phone : ");
	scanf("%lld",&phone);
	printf("Address : ");
	scanf("%s",address);
	printf("Landmark : ");
	scanf("%s",landmark);
	printf("\n\n");
	printf("Your Entered Details Are --->\n");
	FILE *cust;
	cust = fopen("order.txt","a");
	fprintf(cust,"Order Placed By : %s %s\nPhone number : %lld\n",name1,name2,phone);
	fclose(cust);
	printf("    -->First Name :  %s\n    -->Last Name   :  %s\n    -->Phone     :%lld \n    -->Address  :%s \n    -->Landmark  :%s \n",name1,name2,phone,address,landmark);
	printf("\n\n\n");
	printf("                       *********************************************************************************************\n");
	printf("                                                     Your Order Will Be Ready soon.\n");
	printf("                                                              Thank you\n");
	printf("                                                             stay safe...\n");
	printf("                       *********************************************************************************************\n");

	printf("Press Any To The MainMenu.");
	if(getch())
	customer();
}

void aboutus(void)
{
	system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t                  *********************************************************************************************\n\n");

	printf("\t\t\t\t\t                                                         MISS_CHEF_KITCHEN                            \n\n");
    printf("\t\t\t\t\t                                                          37/5,WATAMAWATHA                            \n\n");
    printf("\t\t\t\t\t                                                         NAVINNA,MAHARAGAMA                           \n\n");
    printf("\t\t\t\t\t                  *********************************************************************************************\n");
    printf("\n\n");
	printf("    Press Any Key To Go Back.");
	if(getch())
	mainmenu();
}





