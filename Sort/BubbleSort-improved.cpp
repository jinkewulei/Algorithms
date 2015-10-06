//�Ľ���ð������
//���ñ���position���ڼ�¼ÿһ����������󽻻����ֵ�λ��
//��λ��֮���Ԫ���Ѿ�������λ��������һ��ѭ���У�ֻ�Ƚϵ����λ�ü���

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