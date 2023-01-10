#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
 float X[300];
 float Y[300];
 float data, totalX, totalY, totalXY, totalXkuadrat,totalYkuadrat;
 float ra,rb ;
 int i, ulang;
 cout << "Program menghitung nilai korelasi pearson" ;
 cout << endl ;
 
 do
 {
    totalX=0, totalY=0, totalXY=0, totalXkuadrat=0, totalYkuadrat=0;
    cout << endl << endl ;
 cout << "Masukkan banyak data yang ingin Anda di imput : " ;
 cin >> data ;
 cout << endl ;
 
 //input data
 for (i=0 ; i<data ; i++)
  {
   cout << "Masukkan nilai X-" << i+1 << " : " ;
   cin >> X[i];
   cout << "Masukkan nilai Y-" << i+1 << " : " ;
   cin >> Y[i];
   cout << endl;
  } 
 cout << endl;
 
//menghitung nilai jumlah nilai XY
  for (i=0 ; i<data ; i++)
   totalXY=totalXY+(X[i]*Y[i]);
  
//Menghitung nilai jumlah X dan jumlah Y
  for (i=0 ; i<data ; i++)
   {
    totalX=totalX+X[i];
    totalY=totalY+Y[i];
   }
  
  
//menghitung total X kuadrat
  for (i=0 ; i<data ; i++)
	totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
  
//menghitung total Y kuadrat
  for (i=0 ; i<data ; i++)
	totalYkuadrat=totalYkuadrat+(Y[i]*Y[i]);
  
//BARIS PERTAMA 
//Menghitung n-xy
	float nxy= data*totalXY;
//menghitung total x dan y dikalikan
	float kalxy= totalX*totalY;
//lalu dikurangi
	float bagatas= nxy-kalxy;

	
//BARIS KEDUA
//Akar pertama
	float kalisat= data*totalXkuadrat;
  	float aa = 2;
	float pangsat= pow(totalX,aa);
	float akper= sqrt(kalisat-pangsat);
//Akar kedua
	float kaliked= data*totalYkuadrat;
	float pangked= pow(totalY,aa);
	float akked= sqrt(kaliked-pangked);
//dikali kedua pangkat
	float bagbawah= akper*akked;  
//dijumlahkan semuanya
	float pearson= bagatas/bagbawah;

   
 // menampilkan hasil persamaan linear
 cout << "Nilai Korelasi pearsonnya adalah=" << pearson << setiosflags(ios::showpos) << "" << endl;
 getch();
    
    // fungsi mengulang program
    cout << "Ingin mengulang (Y/T) ?" ;
    ulang=getch();
    } while (ulang=='Y' || ulang=='y');
    
 return 0;
} 
