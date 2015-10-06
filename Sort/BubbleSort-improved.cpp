//改进版冒泡排序
//设置变量position用于记录每一趟排序中最后交换数字的位置
//此位置之后的元素已经交换到位，所以下一次循环中，只比较到这个位置即可

#include <iostream>
using namespace std;

void BubbleSort(int *arrayA, int length)
{
	int unSortedLength = length;
	int position = 10;
	for (int i = 0;i < length-1;i++)
	{
		unSortedLength--;
		int lastComparePos = position;
		for(int j = 0;j < unSortedLength && j < lastComparePos;j++)
		{
			if (arrayA[j] > arrayA[j+1])
			{
				//switch two number
				arrayA[j] = arrayA[j] + arrayA[j+1];
				arrayA[j+1] = arrayA[j] - arrayA[j+1];
				arrayA[j] = arrayA[j] - arrayA[j+1];
				position = j;
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