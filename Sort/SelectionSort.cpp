//选择排序
//在要排序的一组数中，选出最小（或者最大）的一个数与第1个位置的数交换
//然后在剩下的数当中再找最小（或者最大）的与第2个位置的数交换，依次类推
//最好情况时间：O(n^2)。
//最坏情况时间：O(n^2)。
//选择排序是不稳定的
#include <iostream>
using namespace std;

void SeletionSort(int *arrayA, int length)
{
	for (int i = 0;i < length;i++)
	{
		int position = i;		//当position在下述循环中没变时，最终是和自己交换
		int currentMinNum = arrayA[i];
		for (int j = i+1;j < length;j++)
		{
			if (arrayA[j] < currentMinNum)
			{
				currentMinNum = arrayA[j];
				position = j;
			}
		}
		int temp = arrayA[i];
		arrayA[i] = arrayA[position];
		arrayA[position] = temp;
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