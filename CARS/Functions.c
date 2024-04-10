#include<stdio.h>
#include"Function.h"
void addcars(struct car *carsArray,int Arraysize){
	for(int i=0;i<Arraysize;i++)
{
printf("Enter details for car %d:\n", i+1);
printf("brand:");
scanf("%s: ", carsArray[i].brand);
printf("model:\n");
scanf("%s:", carsArray[i].model);
printf("specs:\n");
scanf("%s:", carsArray[i].specs);
printf("color:\n");
scanf("%s:", carsArray[i].color);
printf("price:\n");
scanf("%f:", &carsArray[i].price);}
}
void printcars(struct car *carsArray,int Arraysize){
printf("/n car details:\n");
for (int i = 0; i <Arraysize; i++)
{
printf("brand:");
printf("model");
printf("specs");
printf("color");
printf("price");}
}