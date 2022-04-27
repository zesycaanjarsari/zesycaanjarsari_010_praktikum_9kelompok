#include <iostream>
using namespace std;

void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        
        merge(arr,low,high,mid);
    }
}
// Merge sort 
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
// pemanggilan mergesort 
int main()
{
	// inisialisasi variabel
    int array[30], bil;
    // pemasukan data 
    cout<<"masukkan banyak data :";
    cin>>bil;
    cout<<"masukkan "<<bil<<" bilangan  :";
    cout << endl;
    for (int i = 0; i < bil; i++) { cin>>array[i];
    }
    // hasil setelah di sort
    merge_sort(array, 0, bil-1);
    cout<<" hasil akhir\n";
    for (int i = 0; i < bil; i++)
    {
        cout<<array[i]<<" ";
    }
}
