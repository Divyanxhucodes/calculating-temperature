#include<stdio.h>
int main()
{

int temperature;
 
 printf("enter temperature ");
scanf("%d", & temperature);

 if (temperature<=10){
 	printf("cool");
 }
 else if (temperature <=20){
 	printf("moderate");
 }
 else if (temperature <30){
 	printf("hot");
 }
 else if (temperature <40){
 	 printf("very hot");

 }
else if (temperature <50){
	 printf("very very hot");
}
return 0;
}
