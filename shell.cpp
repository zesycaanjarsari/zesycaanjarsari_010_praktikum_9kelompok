#include<iostream>
using namespace std;

void ShellSort(int sort[], int size){
	for(int gap = size/2; gap > 0; gap /= 2){
		for(int x = gap; x < size; x++){
			int temp = sort[x];
			int y;
			for(y = x; y >= gap && sort[y-gap] > temp; y -= gap){
				sort[y] = sort[y-gap];
			} 
			sort[y] = temp;
		}
	}
}

int main(){
	int size;
	cout<<"Masukkan Jumlah Data\t: ";
	cin>>size;
	int sort[size];
	
	for(int x = 0; x < size; x++){
		cout<<"Masukkan Indeks Data ke-" << x << " : ";
		cin>>sort[x];
	}
	ShellSort(sort, size);
	cout<<"Data Setelah diSortir\t: ";
	for(int x = 0; x < size; x++){
		cout<<"["<<sort[x]<<"]"<<"\t";
	}
	
}
