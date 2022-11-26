#include <iostream>

using namespace std;
 
int main(){
	cout <<               "##  Tugas 5 Program C++  ##\n";
	cout << "nama          : alaika dinulhaq";
	string nama;
	 char ulangi = 'y', gender;
	 int counter = 0 , umur,ganjil = 1,genap = 2;
	 
	 cout <<"\nSoal Ke-1 Bilangan Ganjil"<<endl;

  cout<<"Soal Nomer " << ganjil << " menghitung 10 bilangan ganjil\n  ";
	 
	 cout<<"10 Bilangan Ganjil dan jumlahnya adalah"<<endl;
		      for(int a=ganjil;a<=20;a+=2)
{     		
		      cout << a;
		      if(a<20)
{
	cout<<"+";
}

}
     cout<<"=100";   
  cout << endl;
 cout << "=========================================" << endl;
  cout <<"========Soal Ke-2 Bilangan Genap=========="<<endl;
  
  cout<<"Soal Nomer " << genap <<" menghitung 10 bilangan genap " << endl;
	 
	 cout<<"10 Bilangan Genap dan jumlahnya adalah"<<endl;
		      for(int b=genap;b<=20;b++)
		      if (b%2==0)
{
			  	      cout << b << ' ' ;
{cout<<"+";
}
}
cout<<"=110";

  cout << endl;
  cout << "=========================================" << endl;

  cout <<"===========Soal Ke-3 Perulangan=========="<<endl;
      
     
  cout << "Masukan Nama Anda ?" << endl;
  cout << "jawab: ";
  
  getline(cin,nama);
  
  cout << "jenis kelamin L/P ?";
  cout << "\njawab: ";
 
  cin >> gender;

  

  cout <<"========================================="<<endl;
    
    while(ulangi == 'y'){
    
        cout << "Nama : " << nama ;
        cout << "\njenis kelamin : " << gender;
  cout <<"\n========================================="<<endl;
     
        cout << "Selamat Datang Mas " << nama <<endl;
          
  cout <<"====================================================="<<endl;   
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        cin >> ulangi;

        // increment counter
        counter++;
    }
     
    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
  cout <<"====================================================="<<endl;
    
    return 0;

}

  
    
