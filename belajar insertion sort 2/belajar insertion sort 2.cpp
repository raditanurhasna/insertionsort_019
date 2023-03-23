#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {					// Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : ";	// Membuat Inputan jumlah element Array
		cin >> n;										// Membuat variabel Inputan n 

		if (n <= 20) {									// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else;
		{
			cout << "\nArray yang anda masukan maksimal 20 Elemen.\n";	// Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;
	cout << "=====================" << endl;			// Membuat jarak per baris program
	cout << "Masukan Element Array" << endl;			// Membuat tampilan susunan data element array
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)	
	{ 
}

