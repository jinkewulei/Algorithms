//冒泡排序
//思想：依次两两比较两个相邻的数，将较大的数后移，每一次筛选出未排序部分中最大的数放在正确位置
//最坏运行时间：O(n^2)
//最佳运行时间：O(n^2)
//冒泡排序是稳定的
#include <iostream>
using namespace std;

void BubbleSort(int *arrayA, int length)
{
	int unSortedLength = length;
	for (int i = 0;i < length-1;i++)
	{
		unSortedLength--;
		for(int j = 0;j < unSortedLength;j++)
		{
			if (arrayA[j] > arrayA[j+1])
			{
				//switch two number
				arrayA[j] = arrayA[j] + arrayA[j+1];
				arrayA[j+1] = arrayA[j] - arrayA[j+1];
				arrayA[j] = arrayA[j] - arrayA[j+1];
			}
		}
	}
	for (int i = 0;i < length;i++)
	{
		cout<<arrayA[i]<<"\t";
	}
}

int main()
{
	int arrayA[10] = {8,3,6,7,4,5,2,0,19,21};

	BubbleSort(arrayA,10);

	getchar();
	return 0;
}