#include <iostream>


using namespace std;

// Funktionsdeklaration - Prototyp
// sinngemaes die "bedienungsanletung" - der compiler "merkt" sich die funktionen

void sagMal(int);					// unechte funktion ohne rueckgabewert
int verdopple(int);					// funktion mit rueckgabewert hier int
int vervielfachen(int, int);				// diese erwartet bei aufruf zwei int werte


int main() {

	int y;						// vaiable y vom datentyp int
	int x;
	cout<<"Bitte eine Zahlen eingeben:\t";		// ausgabe
	cin>>y;						// eingabe
	cout<<"Vervielfachen mit?:\t";
	cin>>x;

	cout<<y<<" * "<<x<<" = "<<vervielfachen(y, x);	// ausgabe mit funktionsaufruf
}



int verdopple(int x) {					// Funktiondefinition
	//x = x * 2;
	return x * 2;					// gibt den wert in x mal 2 zurueck
}


int vervielfachen(int was, int wieoft) {		// diese liefert zwei werte (was und wieoft) mit vom datentyp int
	return was*wieoft;				// hier geben wir diese zwei werte multipliziert zurueck
}


void sagMal(int c) {					// unechte funktion ohne rueckgabewert

	c = verdopple(c);				// funktionsaufruf mitgabe des wertes in der variable c
							// und den rueckgabewert wiederum in var c speichern

	for(int x=0; x<c; x++) {			// kopf-gesteuerte schleife
		cout<<"Guten Tag"<<endl;		// ausgabe so viel mal wie wert in c
	}
}

