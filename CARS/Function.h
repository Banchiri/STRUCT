#ifndef FUNCTION_H
#define FUNCTION_H
struct car {
	char brand[10];
	char model[10];
	char specs[10];
	char color[10];
	float price;
};
void addcars(struct car *carsArray,int Arraysize);
void printcars(struct car *carsArray,int Arraysize);
#endif // FUNCTION_H
