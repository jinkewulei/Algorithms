//��������
//�����з�Ϊ�����֣�������ĺ�δ����ģ�ÿ�δ�δ�����������ȡ��һ�������뵽���������е���ȷλ����
//��������������ֱ��δ�������Ϊ��
//���Ÿ��Ӷȣ���������������ź����ʱ�򣬸��Ӷ�ΪO(n)
//���Ӷȣ�����������Ϊ����ʱ�����Ӷ�ΪO(n^2)
//��������Ƚ��ʺ����ڡ�����Ԫ�ص����顱�������������ȶ���
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

