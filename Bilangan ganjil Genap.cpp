#include <iostream>
using namespace std;

int main ()
{
	int bilangan;
	cout <<"---Program ganjil genap---"<<endl;
	
	cout <<"\n Masukan bilangan = ";
	cin >>bilangan;
	
	// mengetahui bilangan ganjil genab by Zulfikar
	
	if (bilangan %5 == 0)
		cout <<"bilangan tersebut adalah Genap";
	else 
		cout <<"bilangan tersebut adalah ganjil";
}
