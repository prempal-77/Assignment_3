/* Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times*/
#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the numbers A, B and C: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B && A >= C)
		printf("%d is the largest number.", A);

	if (B >= A && B >= C)
		printf("%d is the largest number.", B);

	if (C >= A && C >= B)
		printf("%d is the largest number.", C);

	return 0;
}
