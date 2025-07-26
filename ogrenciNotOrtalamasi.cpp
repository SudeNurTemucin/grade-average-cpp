
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int not1;
	int not2;
	int not3;
	double notOrtalamasi;

	cout << "Lutfen 3 adet sinav notu giriniz: " << endl;
	cin >> not1 >> not2 >> not3;


	notOrtalamasi = (double) (not1 + not2 + not3 ) / 3.0;

	//1) Ondalıklı şekilde iki basamak hassasiyetli yazdırmak:
	cout << "1) Not Ortalamasi(ondalikli): " << fixed << setprecision(2) << notOrtalamasi << endl;

	//2) Yuvarlama yaparak tamsayı sonuç:
	int sonuc = (int) round(notOrtalamasi);
	cout << "2) Not Ortalamasi(tam sayi , yuvarlamali): " << sonuc << endl;

	return 0;
}
