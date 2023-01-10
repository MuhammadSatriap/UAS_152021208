#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
float X[300];
float Y[300];
float n, totalX, totalY, totalXY, totalXkuadrat,totalYkuadrat;
float ra,rb ;
int i, ulang;
do{
	totalX=0, totalY=0, totalXY=0, totalXkuadrat=0, totalYkuadrat=0;
	cout << "Masukkan banyak data yang akan di input : " ;
	cin >> n ;
	cout << endl ;
//Input data
for (i=0 ; i<n ; i++){
	cout << "Masukkan nilai X" << i+1 << " : " ;
	cin >> X[i];
	cout << "Masukkan nilai Y" << i+1 << " : " ;
	cin >> Y[i];
	cout << endl;
} 
//Menghitung nilai jumlah nilai XY
for (i=0 ; i<n ; i++)
	totalXY=totalXY+(X[i]*Y[i]);
  
//Menghitung nilai jumlah X dan jumlah Y
for (i=0 ; i<n ; i++){
    totalX=totalX+X[i];
    totalY=totalY+Y[i];
	}
    
//Menghitung total X kuadrat
for (i=0 ; i<n ; i++)
	totalXkuadrat=totalXkuadrat+(X[i]*X[i]);
  
//menghitung total Y kuadrat
for (i=0 ; i<n ; i++)
	totalYkuadrat=totalYkuadrat+(Y[i]*Y[i]);
  
//=====BARIS PERTAMA====== 
//Menghitung n-xy
	float nxy= n*totalXY;
//menghitung total x dan y dikalikan
	float kalxy= totalX*totalY;
//lalu dikurangi
	float bagatas= nxy-kalxy;

	
//=====BARIS KEDUA======
//Akar pertama
	float kalipert= n*totalXkuadrat;
	float aa = 2;
	float pangsat= pow(totalX,aa);
	float akper= sqrt(kalipert-pangsat);
//Akar kedua
	float kaliked= n*totalYkuadrat;
	float pangked= pow(totalY,aa);
	float akked= sqrt(kaliked-pangked);
//Dikali kedua pangkat
	float bagbawah= akper*akked;  
//Dijumlahkan semuanya
	float pearson= bagatas/bagbawah;//Hasil akhir
   
//Menampilkan hasil persamaan linear
string interpr;
if(pearson >= 0.70){
	interpr="Hubungan korelasi sangat kuat";
	}else if(pearson >=0.50){
	interpr="Hubungan korelasi sedang";
	}else if(pearson >=0.30){
	interpr="Hubungan korelasi moderat";
	}else if(pearson >=0.10){
	interpr="Hubungan korelasi rendah";
	}else if(pearson <0.10){
	interpr="Hubungan korelasinya diabaikan";
	}
 
string kesimpulan;
if(pearson == 0){
	kesimpulan="Tidak ada hubungan antara variabel X dan Y";
	}else if(pearson > 0){
	kesimpulan="Hubungan antara variable X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun akan bertambah, dan juga sebaliknya.";
	}else if(pearson < 0){
	kesimpulan="Hubungan antara variable X dan Y adalah negatif, dimana jika nilai X bertambah, maka nilai Y akan mengecil, dan juga sebaliknya.";
	}
 
cout << "Nilai Korelasi pearsonnya adalah : " << pearson << setiosflags(ios::showpos) << endl;
cout << interpr << endl;
cout << kesimpulan << endl;
getch();
   
//Fungsi untuk mengulang program
cout << "Ingin mengulang (Y/T) ?" << endl;
ulang=getch();
    } while (ulang=='Y' || ulang=='y');
    
return 0;
}  
