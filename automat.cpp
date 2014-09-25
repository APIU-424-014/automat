#include <iostream>


using namespace std;

void sagMal(int);
int verdopple(int);
int vervielfachen(int, int);

int main(){

	int y;
	int x;
	cout<<"Bitte eine Zahlen eingeben:\t";
	cin>>y;
	cout<<"Vervielfachen mit?:\t";
	cin>>x;

	cout<<y<<" * "<<x<<" = "<<vervielfachen(y, x);
}
int verdopple(int x){
	//x = x * 2;
	return x * 2;
}

int vervielfachen(int was, int wieoft){
	return was*wieoft;
}

void sagMal(int c) {

	c = verdopple(c);

	for(int x=0; x<c; x++) {
		cout<<"Guten Tag"<<endl;
	}
}

