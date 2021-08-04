#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse_sring(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";//"fedcba"

	reverse_sring(arr);
	printf("%s\n", arr);
	return 0;
}