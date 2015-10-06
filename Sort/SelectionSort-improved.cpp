//改进的选择排序，一次选出一个最大值和一个最小值
//外层循环n/2次即可搞定

#include <iostream>
using namespace std;

void SeletionSort(int *arrayA, int length)
{
	for (int i = 0;i < length/2;i++)
	{
		int minPosition = i;
		int maxPosition = i;
		for (int j = i+1;j < length-i;j++)
		{
			if (arrayA[j] < arrayA[minPosition])
			{
				minPosition = j;
				continue;
			}
			if (arrayA[j] > arrayA[maxPosition])
			{
				maxPosition = j;
			}
		}
		int temp = arrayA[i]; arrayA[i] = arrayA[minPosition]; arrayA[minPosition] = temp;
		temp = arrayA[length-i-1]; arrayA[length-i-1] = arrayA[maxPosition]; arrayA[maxPosition] = temp;

	}
	for (int i = 0;i < length;i++)
	{
		cout<<arrayA[i]<<"\t";
	}
}

int main()
{
	int arrayA[10] = {8,3,6,7,4,5,2,0,9,1};

	SeletionSort(arrayA,10);

	getchar();
	return 0;
}