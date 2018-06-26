#include <iostream>

/*!
* Wykorzystanie przestrzeni danych std
* \namespace
*/
using namespace std;


/*!
* Deklaracja zmiennych pobierajacych 
* dane z czujnikow \var
*/
double 	eng_temp=0,       
		inj_pressure=0,
		batt_charge=0,
		rpm=0;


/*!
* Deklaracja funkcji dokonujacej konwersji \fn
*/
double conversion(double x );

/*!
* Deklaracja funkcji wizualizujacej pomiary \fn
*/
void visualization(double y);

/*!
* Definicja funkcji conversion
*/
double conversion(double x)	{
	x=x*2;
	return x;
}

/*!
* Definicja funkcji visualization
*/
void visualization(double y){
	cout<<"Wartosc po konwersji: ";
	/**
	* Konwersja danych przed wyswietleniem ich
	*/
	cout<<conversion(y)<<"\n";
}



/*!
* Glowna funkcja programu /\fn
*/
int main(int argc, char** argv) {
	
	
/*!
* Pobranie danych z czujnikow
*/
	cout<<"Wprowadz dane \n";
	cin>>eng_temp;
	cin>>inj_pressure;	
	cin>>batt_charge;	
	cin>>rpm;	
	
	
/*!
* Wyswietlenie przekonwertowanych danych
*/
	visualization(eng_temp);
	visualization(inj_pressure);
	visualization(batt_charge);
	visualization(rpm);
	
	return 0;
}
