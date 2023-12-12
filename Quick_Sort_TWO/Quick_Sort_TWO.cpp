#include <iostream>
using namespace std;

void fill_List_arr(int arr[], const int size);
void Print_List_arr(int arr[], const int size);
void quick_Sort(int arr[], int size);
//void qsortRecursive(int mas[], int size);

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    const int size = 20;
    int List_arr[size] = {};



    cout << "Не отсортированый массив\n\n";
    fill_List_arr(List_arr,size);
    Print_List_arr(List_arr, size);


    cout << "\n\nОтсортированый массив\n\n";
   quick_Sort(List_arr, size-1);
  //  qsortRecursive(List_arr, size);
    Print_List_arr(List_arr, size);

}

void fill_List_arr(int arr[],const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + rand() % 30;
    }
}
void Print_List_arr(int arr[], const int size)
{
   /* for (int i = 0; i < size; i++)
    {
        cout << "[" << i+1 << "]";
    }
    cout << endl;*/
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i] << "";
    }
}

void quick_Sort(int arr[], int size)
{
    int i = 0;
    int j = size;
    int Pivot = arr[size / 2];
   // cout << " Опорник => " << Pivot << endl;
    do
    {
        while (arr[i] < Pivot)
            i++;
        while (arr[j] > Pivot)
            j--;
        if (i<=j)
        {
            /*int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;*/
            swap(arr[i], arr[j]);
            i++;
            j--;
        }



    } while (i <= j);
   
    if (j > 0)
        quick_Sort(arr, j);
    if (i < size)
        quick_Sort(arr+i,size-i);
}



//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//template <class T>
//void quickSortR(T a[], long N) {// На входе - массив a[],
//// a[N] - его последний элемент.
//// поставить указатели на исходные места
//	long i = 0, j = N;
//	T temp, p;
//	p = a[N / 2]; // центральный элемент
//	// процедура разделения
//	do {
//		while (a[i] < p) i++;
//		while (a[j] > p) j--;
//		if (i <= j) {
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	/*
//	рекурсивные вызовы, если есть,
//	что сортировать
//	*/
//	if (j > 0) quickSortR(a, j);
//	if (N > i) quickSortR(a + i, N - i);
//
//
//}
//int main() {
//	srand(time(NULL));
//	const long SIZE = 15;
//	int ar[SIZE];
//	// до сортировки
//	for (int i = 0; i < SIZE; i++) {
//		ar[i] = 10+rand() % 15;
//		cout << ar[i] << "\t";
//	}
//
//	cout << "\n\n";
//	quickSortR(ar, SIZE - 1);
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	return 0;
//}