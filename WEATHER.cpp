#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void table1();
void table2();
void table3();
void table4();
void table5();
struct weather
{
	float rainfall,humidity,avgtemp;
};
	struct weather patna_2014={13,60,12.9};
	struct weather delhi_2014={14,56,13.5};
	struct weather mumbai_2014={11.9,63,14.1};
	struct weather bhubneswar_2014={14,56,13.5};
	struct weather kolkata_2014={11.9,63,14.1};

	struct weather patna_2015={13,60,12.9};
	struct weather delhi_2015={14,56,13.5};
	struct weather mumbai_2015={11.9,63,14.1};
	struct weather bhubneswar_2015={14,56,13.5};
	struct weather kolkata_2015={11.9,63,14.1};
	
	struct weather patna_2016={13,60,12.9};
	struct weather delhi_2016={14,56,13.5};
	struct weather mumbai_2016={11.9,63,14.1};
	struct weather bhubneswar_2016={14,56,13.5};
	struct weather kolkata_2016={11.9,63,14.1};
int main()
{	int a;
	char x[10],y[4],z;
	do
	{
	system("cls");
	puts("\n**********WELCOME TO WEATHER PROJECT**********\n");
	printf("\nSELECT YOUR CHIOCE");
	printf("\n\n1.SHOW TABLE\n2.SELECT CITY\n3.COMPARE YEAR and CITY\n");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
		case 1:
			{	puts("\n**********WELCOME TO WEATHER PROJECT**********\n");
				table1();
				table2();
				table3();
				table4();
				table5();
				break;
			}
		case 2:
			{	puts("\n**********WELCOME TO WEATHER PROJECT**********\n");
				fflush(stdin);
				printf("select from city patna,delhi,mumbai,bhubneswar,kolkata\n");
				gets(x);
				system("cls");
				puts("\n**********WELCOME TO WEATHER PROJECT**********\n");
				if(strcmp(x,"patna")==0)
				{
				table1();
				}
				else if(strcmp(x,"delhi")==0)
				{
				table2();
				}
				else if(strcmp(x,"mumbai")==0)
				{
				table3();
				}
				else if(strcmp(x,"bhubneswar")==0)
				{
				table4();
				}
				else if(strcmp(x,"kolkata")==0)
				{
				table5();
				}
				break;
			}
		case 3:
			{
				puts("\n**********WELCOME TO WEATHER PROJECT**********\n");
				fflush(stdin);
				puts("SELECT YEAR FROM 2014, 2015, 2016");
				gets(y);
				system("cls");
				if(strcmp(y,"2014")==0)
				{	puts("2014");
					printf("\ncity\t\trainfall(mm)\thumidity(per)\taverage temperature");
					printf("\npatna||\t\t%.2f\t\t%.2f\t\t%.2f",patna_2014.rainfall,patna_2014.humidity,patna_2014.avgtemp);
					printf("\ndelhi||\t\t%.2f\t\t%.2f\t\t%.2f",delhi_2014.rainfall,delhi_2014.humidity,delhi_2014.avgtemp);
					printf("\nmumbai||\t%.2f\t\t%.2f\t\t%.2f",mumbai_2014.rainfall,mumbai_2014.humidity,mumbai_2014.avgtemp);
					printf("\nbhb||\t\t%.2f\t\t%.2f\t\t%.2f",bhubneswar_2014.rainfall,bhubneswar_2014.humidity,bhubneswar_2014.avgtemp);
					printf("\nkolkata||\t%.2f\t\t%.2f\t\t%.2f",kolkata_2014.rainfall,kolkata_2014.humidity,kolkata_2014.avgtemp);
				}
				else if(strcmp(y,"2015")==0)
				{	puts("2015");
					printf("\ncity\t\trainfall(mm)\thumidity(per)\taverage temperature");
					printf("\npatna||\t\t%.2f\t\t%.2f\t\t%.2f",patna_2015.rainfall,patna_2015.humidity,patna_2015.avgtemp);
					printf("\ndelhi||\t\t%.2f\t\t%.2f\t\t%.2f",delhi_2015.rainfall,delhi_2015.humidity,delhi_2015.avgtemp);
					printf("\nmumbai||\t%.2f\t\t%.2f\t\t%.2f",mumbai_2015.rainfall,mumbai_2015.humidity,mumbai_2015.avgtemp);
					printf("\nbhb||\t\t%.2f\t\t%.2f\t\t%.2f",bhubneswar_2015.rainfall,bhubneswar_2015.humidity,bhubneswar_2015.avgtemp);
					printf("\nkolkata||\t%.2f\t\t%.2f\t\t%.2f",kolkata_2015.rainfall,kolkata_2015.humidity,kolkata_2015.avgtemp);
				}
				else if(strcmp(y,"2016")==0)
				{
					puts("2015");
					printf("\ncity\t\trainfall(mm)\thumidity(per)\taverage temperature");
					printf("\npatna||\t\t%.2f\t\t%.2f\t\t%.2f",patna_2016.rainfall,patna_2016.humidity,patna_2016.avgtemp);
					printf("\ndelhi||\t\t%.2f\t\t%.2f\t\t%.2f",delhi_2016.rainfall,delhi_2016.humidity,delhi_2016.avgtemp);
					printf("\nmumbai||\t%.2f\t\t%.2f\t\t%.2f",mumbai_2016.rainfall,mumbai_2016.humidity,mumbai_2016.avgtemp);
					printf("\nbhb||\t\t%.2f\t\t%.2f\t\t%.2f",bhubneswar_2016.rainfall,bhubneswar_2016.humidity,bhubneswar_2016.avgtemp);
					printf("\nkolkata||\t%.2f\t\t%.2f\t\t%.2f",kolkata_2016.rainfall,kolkata_2016.humidity,kolkata_2016.avgtemp);
				}
				break;
			}
		
	}
	puts("\n\nGO TO MAIN MENU.(Y/N)");
	scanf("%s",&z);
	}
	while(z=='y');
}
void table1()
{
	puts("PATNA");
	printf("\n============================================================");
	printf("\nyear\trainfall(mm)\thumidity(per)\taverage temperature");
	printf("\n============================================================");
	printf("\n2014||\t%.2f\t\t%.2f\t\t%.2f",patna_2014.rainfall,patna_2014.humidity,patna_2014.avgtemp);
	printf("\n2015||\t%.2f\t\t%.2f\t\t%.2f",patna_2015.rainfall,patna_2015.humidity,patna_2015.avgtemp);
	printf("\n2016||\t%.2f\t\t%.2f\t\t%.2f",patna_2016.rainfall,patna_2016.humidity,patna_2016.avgtemp);
	printf("\n============================================================");
}
void table2()
{
	puts("\nDELHI");
	printf("\n============================================================");
	printf("\nyear\trainfall(mm)\thumidity(per)\taverage temperature");
	printf("\n============================================================");
	printf("\n2014||\t%.2f\t\t%.2f\t\t%.2f",delhi_2014.rainfall,delhi_2014.humidity,delhi_2014.avgtemp);
	printf("\n2015||\t%.2f\t\t%.2f\t\t%.2f",delhi_2015.rainfall,delhi_2015.humidity,delhi_2015.avgtemp);
	printf("\n2016||\t%.2f\t\t%.2f\t\t%.2f",delhi_2016.rainfall,delhi_2016.humidity,delhi_2016.avgtemp);
	printf("\n============================================================");
}
void table3()
{
	puts("\nMUMBAI");
	printf("\n============================================================");
	printf("\nyear\trainfall(mm)\thumidity(per)\taverage temperature");
	printf("\n============================================================");
	printf("\n2014||\t%.2f\t\t%.2f\t\t%.2f",mumbai_2014.rainfall,mumbai_2014.humidity,mumbai_2014.avgtemp);
	printf("\n2015||\t%.2f\t\t%.2f\t\t%.2f",mumbai_2015.rainfall,mumbai_2015.humidity,mumbai_2015.avgtemp);
	printf("\n2016||\t%.2f\t\t%.2f\t\t%.2f",mumbai_2016.rainfall,mumbai_2016.humidity,mumbai_2016.avgtemp);
	printf("\n============================================================");
}
void table4()
{
	puts("\nBHUBNESWAR");
	printf("\n============================================================");
	printf("\nyear\trainfall(mm)\thumidity(per)\taverage temperature");
	printf("\n============================================================");
	printf("\n2014||\t%.2f\t\t%.2f\t\t%.2f",bhubneswar_2014.rainfall,bhubneswar_2014.humidity,bhubneswar_2014.avgtemp);
	printf("\n2015||\t%.2f\t\t%.2f\t\t%.2f",bhubneswar_2015.rainfall,bhubneswar_2015.humidity,bhubneswar_2015.avgtemp);
	printf("\n2016||\t%.2f\t\t%.2f\t\t%.2f",bhubneswar_2016.rainfall,bhubneswar_2016.humidity,bhubneswar_2016.avgtemp);
	printf("\n============================================================");
}
void table5()
{
	puts("\nKOLKATA");
	printf("\n============================================================");
	printf("\nyear\trainfall(mm)\thumidity(per)\taverage temperature");
	printf("\n============================================================");
	printf("\n2014||\t%.2f\t\t%.2f\t\t%.2f",kolkata_2014.rainfall,kolkata_2014.humidity,kolkata_2014.avgtemp);
	printf("\n2015||\t%.2f\t\t%.2f\t\t%.2f",kolkata_2015.rainfall,kolkata_2015.humidity,kolkata_2015.avgtemp);
	printf("\n2016||\t%.2f\t\t%.2f\t\t%.2f",kolkata_2016.rainfall,kolkata_2016.humidity,kolkata_2016.avgtemp);
	printf("\n============================================================");
}
