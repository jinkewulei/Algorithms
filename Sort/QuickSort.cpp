////快速排序
////1）选择一个基准元素,通常选择第一个元素或者最后一个元素
////2）通过一趟排序讲待排序的记录分割成独立的两部分，其中一部分记录的元素值均比基准元素值小。另一部分记录的 元素值比基准值大
////3）此时基准元素在其排好序后的正确位置
////4）然后分别对这两部分记录用同样的方法继续进行排序，直到整个序列有序。
////快速排序是不稳定的
////最好情况时间：O(n*logn)
////最坏情况时间：O(n^2)。
////平均时间复杂度：O(n*logn)
////辅助存储：O(n*logn)
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