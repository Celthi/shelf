#include <stdio.h>
#include <stdlib.h>

#define R 3
#define C 4
#define MAXLENGTH 200
#define SIZE 100

int mygetline(char *s, int max);

int main(void)
{
	int a[R][C];
	char s[SIZE];
	int test[R][C] = {100, 1, 2, 3, 
					  5,  6, 7, 8,
					  4, 3, 4, 2};

	mygetline(s,MAXLENGTH); 
	printf("%s\n", s);
	int temp = 0;

	int i,j;
	i = j = 0;

	while (i < R && j < C) {
		while (scanf(s, "%d", &temp) == 1)
			a[i][j++] = temp;
			i++;
			j = 0;
	}
	i = j = 0;
	int *aa = (int *)a;
	i = R * C;
	while(i--)
		printf("%d ", *(aa + i));
	printf("\n");
	aa = (int *)test;
	i = 0;
	while(i < 12)
		printf("%d ", *(aa + i++));
}

int mygetline(char *s, int max)
{
	char c;
	while ((c = getchar()) != EOF && c != '\n' && max--) {
		*s++ = c;
	}
	*s++ = c;
	*s = '\0';
	return 1;
}
