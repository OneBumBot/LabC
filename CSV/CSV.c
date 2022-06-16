#include <stdlib.h>

#include <stdio.h>
#include <string.h>




typedef struct person {
	char FirstName[20];
	char LastName[20];
	char Gender[8];
	char Occupation[20];
	unsigned int Salary;
} person;

void set_data(char s[], int* k, char field[])
{

	int i = *k;
	while ((s[i] == ',') || (s[i] == '\"'))
	{
		i++;
	}
	int j = 0;
	while (s[i] != '\"')
	{
		field[j] = s[i];
		i++;
		j++;
	}
	field[j] = '\0';
	*k = i;
}




int main(int argc, char* argv[]) {
	FILE* fp;
	char s[255];

	int n = 0, i;
	person* data = NULL;
	person tmp;

	if (argc != 3) {
		printf("CSV scanner. Counts average salary on choosen Occupation.\n Usage:\n csv.exe <filename> <Occupation>\n");
		return 2;
	}

	if (NULL == (fp = fopen(argv[1], "r"))) {
		fprintf(stderr, "cannot open file '%s'", argv[1]);
		return 1;
	}
	if (!(fopen_s(&fp, argv[1], "r"))) {
		fgets(s, 255, fp);
		while (!feof(fp)) {
			fgets(s, 255, fp);
			data = (person*)realloc(data, (n + 1) * sizeof(person));
			i = 0;
			set_data(s, &i, data[n].FirstName);
			set_data(s, &i, data[n].LastName);
			set_data(s, &i, data[n].Gender);
			set_data(s, &i, data[n].Occupation);
			sscanf_s(&s[i + 3], "%d", &data[n].Salary);
			n++;
		}
		fclose(fp);
	}

	for (int f = 0; f < n - 1; f++) {
		if (0 == strcmp(data[f].Occupation, argv[2]))
			printf("%s %s %s %s %u \n", data[f].FirstName, data[f].LastName, data[f].Gender, data[f].Occupation, data[f].Salary);

	}



	return 0;
}