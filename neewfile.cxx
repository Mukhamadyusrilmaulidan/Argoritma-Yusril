#include <iostream.h>
#include <conio.h>
char nama[35];
char alamat[35];
int nilai1;
int nilai2;
float rata;
int main ()
{
clrscr ();
strcpy(nama, "MUKHAMAD YUSRIL MAULIDAN");
strcpy(alamat, "Tegal wangi kab.Tegal");
nilai1 = 95;
nilai2 = 92;
//cetak data...........................
cout << "Data Mahasiswa" << endl;
cout << "=============================" << endl;
cout <<"1. Nama : "<< nama <<endl;
cout <<"2. Alamat : "<< alamat << endl;
cout <<"3. Nilai1 : "<< nilai1 << endl;
cout <<"4. Nilai2 : "<< nilai2 << endl;
rata = (nilai1 + nilai2)/2;
cout <<"5. Rata-rata : "<< rata << endl;
cout <<"============================="<< endl;
getch();
return 0;
}