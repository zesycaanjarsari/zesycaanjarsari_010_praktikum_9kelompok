// Aini Azzah - 006 - D4 MI 2021 B
// Selection sort minimum method

#include<iostream>
using namespace std;


// Fungsi Tukar, sebagai program untuk menukar nilai minimum dengan elemen awal (index pertama) pada array
void tukar (int &index_pertama, int &minimum)
{  
   int temp;
   temp = index_pertama;
   index_pertama = minimum;
   minimum = temp;
}


// Fungsi SelectionSort, sebagai program untuk mengurutkan menggunakan selection sort
void selectionSort (int *array, int jumlah)
{
	// Inisialisasi variabel untuk index pertama dan kedua pada array, dan nilai minimum.
   int index_pertama, index_kedua, minimum;
   
   for (index_pertama = 0; index_pertama < jumlah - 1; index_pertama++)
   {
      minimum = index_pertama;   // Mendeklarasikan nilai minimum pada index pertama
      
      for (index_kedua = index_pertama+1; index_kedua < jumlah; index_kedua++)
      {
      	if (array[index_kedua] < array[minimum])	// Menelusuri urutan angka, dengan mencari nilai minimum disepanjang elemen array
            minimum = index_kedua;					// Menetapkan nilai terkecil menjadi nilai minimum pada variabel minimum
	  }
	  
        // Menempatkan urutan angka yang tepat dengan memanggil fungsi tukar
		// yaitu dengan menukar index pertama dengan nilai yang paling kecil (minimum)
        tukar (array[index_pertama], array[minimum]);
   }
}


// Fungsi Hasil, sebagai program untuk menampilakan hasil urutan selection sort
void Hasil (int *array, int jumlah)
{
   for (int i = 0; i<jumlah; i++)
      cout << "[" << array[i] << "]" " ";
   cout << endl;
}


// Program utama
int main() {
	// Inisialisasi variabel panjang elemen array
   int jumlah;
   // Menginput nilai panjang elemen pada array
   cout << "Masukkan jumlah angka dalam array : ";   cin >> jumlah;
   
   
   // Inisialisasi variabel untuk mengisi elemen pada array
   int array[jumlah]; 
   // Menginput angka acak/random pada tiap elemen array          
   cout << "Masukkan angka :" << endl;
   for (int i = 0; i<jumlah; i++)
   {
      cin >> array[i];
   }
   
   
   // Memanggil program selection sort untuk melakukan proses pengurutan menggunakan selection sort
   selectionSort(array, jumlah);
   
   // Menampilkan angka yang telah diurutkan
   cout << "\nHasil array yang sudah di sorting : ";
   Hasil (array, jumlah);
   
}
