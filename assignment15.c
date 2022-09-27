#include <stdio.h>
#include <stdlib.h>

int main()
{
	typedef struct
	{
		int roll;
		char name[100];
		double ygpa;
	} students;
	FILE *fp_read, *fp_append;
	int i;
	students stud[10];
	fp_read = fopen("Stud_info.txt", "r");
	fp_append = fopen("Stud_info.txt", "a");
	if (fp_read == NULL)
	{
		printf("\n The Read file could not open");
		exit(0);
	}
	if (fp_append == NULL)
	{
		printf("\n The Write file could not open");
		exit(0);
	}
	for (i = 0; i < 10 && feof(fp_read) == 0; i++)
	{
		fscanf(fp_read, "%d %s %lf", &stud[i].roll, stud[i].name, &stud[i].ygpa);
	}
	double highest = -100;
	int hg_index;
	for (i = 0; i < 10; i++)
	{
		if (stud[i].ygpa > highest)
		{
			highest = stud[i].ygpa;
			hg_index = i;
		}
	}
	fprintf(fp_append, "\n\nBest Student is : Roll - %d, Name - %s, YGPA - %0.2f", stud[hg_index].roll, stud[hg_index].name, stud[hg_index].ygpa);
	fclose(fp_read);
	fclose(fp_append);
	return 0;
}
