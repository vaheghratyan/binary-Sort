#include <Windows.h>
#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int count, b[30], buf;

	printf("Enter the number of elements ");
	scanf("%d", &count);

	printf("Enter the elements of array\n");
	for (int i = 0; i < count; i++)
		scanf("%d", &b[i]);


	for (int i = 1; i < count; i++)
		if (b[i] < b[i - 1])
		{
			buf = b[i];
			int left = 0;
			int right = i - 1;
			while (left <= right)
			{
				int mid = (left + right) / 2;
				if (buf > b[mid])
					left = mid + 1;
				else
					right = mid - 1;
			}
			for (int j = i - 1; j > right; j--)
				b[j + 1] = b[j];
			b[right + 1] = buf;
		}

	for (int i = 0; i < count; i++)
		printf("%d ", b[i]);


	system("pause");
	return 0;
}
