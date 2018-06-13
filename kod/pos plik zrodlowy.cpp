#include <iostream>

using namespace std;


// deklaracja danych pobieranych przez czujniki
double 	eng_temp=0,       
		inj_pressure=0,
		batt_charge=0,
		rpm=0;


//funkcja dokonuj¹ca konwersji
double conversion(double x );

double conversion(double x)	{
	x=x*2;
	return x;
}

//funkcja wizualizuj¹ca
void visualization(double y);

void visualization(double y){
	cout<<"Wartosc po konwersji: ";
	//konwersja danych do wizualizacji
	cout<<conversion(y)<<"\n";
}



//g³ówna funkcja programu
int main(int argc, char** argv) {
	
	
//wczytanie danych
	cout<<"Wprowadz dane \n";
	cin>>eng_temp;
	cin>>inj_pressure;	
	cin>>batt_charge;	
	cin>>rpm;	
	
	
//wyœwietlanie danych	
	visualization(eng_temp);
	visualization(inj_pressure);
	visualization(batt_charge);
	visualization(rpm);
	
	return 0;
}
