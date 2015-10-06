//插入排序
//将序列分为两部分，已排序的和未排序的，每次从未排序的数列中取出一个，插入到已排序数列的正确位置中
//迭代上述操作，直至未排序队列为空
//最优复杂度：当输入数组就是排好序的时候，复杂度为O(n)
//最差复杂度：当输入数组为倒序时，复杂度为O(n^2)
//插入排序比较适合用于“少量元素的数组”，插入排序是稳定的
#include <iostream>
using namespace std;

void InsertSort(int *arrayA, int lenth)
{
	for(int i = 1;i < lenth;i++)
	{
		int currentNum = arrayA[i];
		int j = i-1;
		//forwar move each element until find the right position of currentNum
		while (currentNum<arrayA[j] && j>=0)
		{
			arrayA[j+1] = arrayA[j];
			j--;
		}
		//insert current number
		arrayA[j+1] = currentNum;
		
	}
	//print ordered array
	for (int i = 0;i < lenth;i++)
	{
		cout<<arrayA[i]<<"\t";
	}
}

int main()
{
	int arrayA[10] = {8,3,6,7,4,5,2,0,9,1};

	InsertSort(arrayA,10);

	getchar();
	return 0;
}

