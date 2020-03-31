#include <iostream>

using namespace std;
int main()
{
	int jml;
	cout<<"masukkan jumlah mobil yang dibeli = ";
	cin>> jml;
	string type_mobil[100] = {};
	for (int i = 0; i < jml; i++)
	{
		cout<<"masukkan type mobil ke "<<i +1<< " = ";
		cin>> type_mobil[i];
	}
	for (int j = 0; j < jml; j++)
	{
		cout<<"type mobil ke ke "<< j + 1 << " adalah "<< type_mobil[j]<<endl;
		
	}
	system("pause");
	return 0;
}
