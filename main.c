#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int ID; // student number
	char name[100]; // name
	float score; // score
};

int main(int argc, char *argv[])
{
	// instance announcement
	struct student sl = {123, "HAYOUNG", 4.3};
	
	// change Value
	sl.ID = 123456;	
	sl.name[0] = 'c';
	sl.score = 0.7;
	
	// print
	printf("ID : %i\n", sl.ID);
	printf("name : %s\n", sl.name);
	printf("grade : %f\n", sl.score);
	
	strcpy(sl.name, "Bongjun");
	printf("name2 : %s\n");
	
	system("PAUSE");
	return 0;
}
