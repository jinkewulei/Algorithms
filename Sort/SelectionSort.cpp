//ѡ������
//��Ҫ�����һ�����У�ѡ����С��������󣩵�һ�������1��λ�õ�������
//Ȼ����ʣ�µ�������������С��������󣩵����2��λ�õ�����������������
//������ʱ�䣺O(n^2)��
//����ʱ�䣺O(n^2)��
//ѡ�������ǲ��ȶ���
#include <iostream>
using namespace std;

void SeletionSort(int *arrayA, int length)
{
	for (int i = 0;i < length;i++)
	{
		int position = i;		//��position������ѭ����û��ʱ�������Ǻ��Լ�����
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