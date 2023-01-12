#include<iostream>
#include<conio.h>

using namespace std;
 const double phi=3.14;
 double hitungluas(double r){
	double Luas= phi *(r * r);
	return Luas;
}
 double hitungkeliling(double r){
 	double d = 2 * r;
 	double K = phi *  d;
 	return K;
 }
 
 
 int main(){
 	cout<<"---------ALAIKA DINULHAQ-----------\n";
 	cout<<"latihan menghitung luas dan keliling lingkaran\n";
 	cout<<"-----------------------------------\n";
 	double r;
 	cout<<"masukkan jari jari lingkaran: "; cin>>r;
 	cout<< "luas lingkaran adalah : "; 
 	cout<<hitungluas(r);
 	cout<<"\nkeliling lingkaran adalah : ";
 	cout<<hitungkeliling(r);
 	
 }
