#include<iostream>
using namespace std;

int main(){
	string nama;
	int data, i;
	float nilai, jumlah, rata;
	
	cout << "ALAIKA DINULHAQ";
	cout << "\nprogram menghitung skor rata-rata\n";
	cout << "nama peserta : ";
	getline(cin,nama);
	
	cout << "total pertandingan : "; cin >> data;
	
	for(int i = 1; i <= data; i++)
	{
		
		cout << "skor pertandingan ke-"<<i<< " : ";
		cin >> nilai;
		
		jumlah += nilai;
	}
	
	cout << "nama peserta                   =" <<nama;
	cout << endl;
	cout <<  "dengan total skor pertandingan ="<<jumlah;
	
	rata = jumlah / data;
	cout << "\nnilai rata-ratanya             =" << rata;
	cout << "\nTERIMA KASIH";
	
}
