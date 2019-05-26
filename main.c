#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void delay(int number_of_seconds);
int main() {
	char b[]= {'W','E','L','C','O','M','E',' ','T','O',' ','M','A','J','U'};
    
    int k;
    printf ("\t\t              ");
    for(k=0; k<15;k++){
        printf("%c",b[k]);
        delay(150);
    }
	srand (time(NULL));
	int Option,i,input,correct,j,qcounter=0,counter=0;
	printf("\n\t\t________________________________________");
	printf("\n\t\t\t\t   WELCOME ");
    printf("\n\t\t\t\t     to ");
    printf("\n\t\t\t\t THE QUIZ GAME ");
	printf("\n\t\t________________________________________");
	printf("\n\n\t\t\t\t1.Mathematics\n\n\t\t\t\t2.Physics\n\n\t\t\t\t3.Chemistry\n");
	printf("\n\t\t________________________________________");
	printf("\n\n\t\t\t\tSelect Option: ");
	printf("\n\t\t________________________________________");
    printf("\n\n\t\t > Press 1 to start Mathematics Quiz");
    printf("\n\t\t > Press 2 to start Physics Quiz");
    printf("\n\t\t > Press 3 to start Chemistry Quiz");
    printf("\n\t\t________________________________________\n\n");
	printf("\n\t\t\t    Enter Option: ");
	scanf("%d",&Option);
	
	if(Option == 1){
		char array[][256] = {{"\nWhen a metallic ball bearing is placed inside a cylindrical container, of radius 2 cm,\nthe height of the water, inside the container, increases by 0.6 cm. The radius,\nto the nearest tenth of a centimeter, of the ball bearing is\0"},
							{"\n20 % of 2 is equal to\0"},
							{"\nThe period of | sin (3x) | is \0"},
							{"The period of 2 sin x cos x is \0"},
							{"\n4 x 3 / 3 + 4 - 7\0"}};
		char array1[][256] = {{"1.2 cm\0"},{"20\0"},{"2 pi\0"},{"2 pi\0"},{"1\0"}};
		char array2[][256] = {{"1.1 cm\0"},{"0.4 cm\0"},{"3 pi\0"},{"3 pi\0"},{"2\0"}};
		char array3[][256] = {{"3.2 cm\0"},{"4\0"},{"pi / 3\0"},{"4 pi^2\0"},{"0.2\0"}};
		char array4[][256] = {{"0.6 cm\0"},{"2\0"},{"2 pi / 3\0"},{"pi\0"},{"4\0"}};
		int a[]={0,0,0,0,0};
		do{
		i= rand()%5;
		if (a[i]==0){
		a[i]=1;
		printf("%s\n",array[i]);
		printf("\n1.%s\t2.%s\n3.%s\t4.%s",array1[i],array2[i],array3[i],array4[i]);
		scanf ("%d",&input);
		qcounter++;
		switch (i%4){
			case 0:
				correct=1;
			break;
			case 1:
				correct=2;
			break;
			case 2:
				correct=3;
			break;
			case 3:
				correct=4;
			break;
		}		 
		if (input==correct){
			printf ("Correct");
			counter++;
		}else{
			printf ("Incorrect");
			printf ("%d",correct);
				}
			}
		}while(qcounter!=5);	
	}
	
		if(Option == 2){
		char array[][256] = {{"\nPick out the scalar quantity\0"},
							{"\nLight year is a unit of\0"},
							{"\nLight from the Sun reaches us in nearly\0"},
							{"\nSound waves in air are\0"},
							{"\nLux is the SI unit of\0"}};
		char array1[][256] = {{"pressure\0"},{"time\0"},{"2 minutes\0"},{"transverse\0"},{"intensity of illumination\0"}};
		char array2[][256] = {{"force\0"},{"distance\0"},{"4 minutes\0"},{"electromagnetic\0"},{"luminous efficiency\0"}};
		char array3[][256] = {{"velocity\0"},{"light\0"},{"8 minutes\0"},{"polarised\0"},{"luminous flux\0"}};
		char array4[][256] = {{"acceleration\0"},{"intensity of light\0"},{"16 minutes\0"},{"longitudinal\0"},{"luminous intensity\0"}};
		int a[]={0,0,0,0,0};
		do{
		i= rand()%5;
		if (a[i]==0){
		a[i]=1;
		printf("%s\n",array[i]);
		printf("\n1.%s\t2.%s\n3.%s\t4.%s",array1[i],array2[i],array3[i],array4[i]);
		scanf ("%d",&input);
		qcounter++;
		switch (i%4){
			case 0:
				correct=1;
			break;
			case 1:
				correct=2;
			break;
			case 2:
				correct=3;
			break;
			case 3:
				correct=4;
			break;
		} 
		if (input==correct){
			printf ("Correct");
			counter++;
		}else{
			printf ("Incorrect");
			printf ("%d",correct);
			
				}
			}
		}while(qcounter!=5);	
	}
	
		if(Option == 3){
		char array[][256] = {{"\nWhich among the following gas is used in Balloons?\0"},
							{"\nHard Water contains which of the following ?\0"},
							{"\nWhich among the following is Quick Silver?\0"},
							{"\nThe Chemical formula of Graphite is\0"},
							{"\nIdentify the non-metallic mineral from the given options:\0"}};
		char array1[][256] = {{"Helium\0"},{"Aluminum\0"},{"Aluminium\0"},{"C2\0"},{"Silica\0"}};
		char array2[][256] = {{"Hydrogen\0"},{"Calcium\0"},{"Lead\0"},{"C4\0"},{"Manganese\0"}};
		char array3[][256] = {{"Nitrogen\0"},{"Chlorine\0"},{"Mercury\0"},{"C6\0"},{"Magnesium\0"}};
		char array4[][256] = {{"Oxygen\0"},{"Zinc\0"},{"Zinc\0"},{"C\0"},{"Bauxite\0"}};
		int a[]={0,0,0,0,0};
		do{
		i= rand()%5;
		if (a[i]==0){
		a[i]=1;
		printf("%s\n",array[i]);
		printf("\n1.%s\t2.%s\n3.%s\t4.%s",array1[i],array2[i],array3[i],array4[i]);
		scanf ("%d",&input);
		qcounter++;
		switch (i%4){
			case 0:
				correct=1;
			break;
			case 1:
				correct=2;
			break;
			case 2:
				correct=3;
			break;
			case 3:
				correct=4;
			break;
		} 
		if (input==correct){
			printf ("Correct");
			counter++;
		}else{
			printf ("Incorrect");
			printf ("Correct is %d",correct);
				}
			}
		}while(qcounter!=5);	
	}
	
	printf("\nYour Score is %d/5",counter);
	return 0;
}

void delay(int number_of_seconds){
    // Stroing start time
    clock_t start_time = clock();
 
    // looping till required time is not acheived
    while (clock() < start_time + number_of_seconds);
}
