////��������
////1��ѡ��һ����׼Ԫ��,ͨ��ѡ���һ��Ԫ�ػ������һ��Ԫ��
////2��ͨ��һ�����򽲴�����ļ�¼�ָ�ɶ����������֣�����һ���ּ�¼��Ԫ��ֵ���Ȼ�׼Ԫ��ֵС����һ���ּ�¼�� Ԫ��ֵ�Ȼ�׼ֵ��
////3����ʱ��׼Ԫ�������ź�������ȷλ��
////4��Ȼ��ֱ���������ּ�¼��ͬ���ķ���������������ֱ��������������
////���������ǲ��ȶ���
////������ʱ�䣺O(n*logn)
////����ʱ�䣺O(n^2)��
////ƽ��ʱ�临�Ӷȣ�O(n*logn)
////�����洢��O(n*logn)
//
//#include <iostream>
//using namespace std;
//
//int partition(int arr[], int low, int high)
//{
//	int pivot = arr[low];
//
//	while (low < high)
//	{
//		while (low < high && arr[high] > pivot)
//		{
//			high--;
//		}
//		if (low < high)
//		{
//			arr[low++] = arr[high];
//		}
//		while (low < high && arr[low] < pivot)
//		{
//			low++;
//		}
//		if (low < high)
//		{
//			arr[high--] = arr[low];
//		}
//	}
//
//	arr[low] = pivot;
//	return low;
//}
//
//void quickSort(int arr[], int low, int high)
//{
//	if (arr == NULL)
//	{
//		return;
//	}
//
//	if (low < high)
//	{
//		int pivotLoc = partition(arr, low, high);
//		quickSort(arr, low, pivotLoc-1);
//		quickSort(arr, pivotLoc+1, high);
//	}
//}
//
//int main()
//{
//	int arrayA[] = {8,3,6,7,4,5,2,0,9,1};
//	int highLoc = sizeof(arrayA) / sizeof(int) - 1;
//	
//	quickSort(arrayA, 0, highLoc);
//
//	for (int i = 0; i <= highLoc; i++)
//	{
//		cout<<arrayA[i]<<"\t";
//	}
//
//	getchar();
//	return 0;
//}