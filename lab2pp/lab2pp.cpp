

#include <iostream>
using namespace std;
int main()
{
	//a)
	for (int i = 5; i < 8; i++) {
		cout << i << endl;
	}
		cout << endl;
	//b)
	for (int i = 0; i < 10; i+=2) {
		cout << i << endl;
	}
	cout << endl;
	//c)
	for (int i = 10; i>=0; i-=1) {
		cout << i << endl;
	}
	cout << endl;
	//zad.3
	 /*int fahr, celsius;
	 int start, limit, krok;
	 start = 0;
	 limit = 200;
	 krok = 20;
	 fahr = start;
	 for (fahr = 0; fahr <= limit; fahr = fahr + krok)  
	 {
		 float celsius = (5.0 / 9.0) * (fahr - 32.0);
		 cout << fahr << "\t" << celsius << endl;
	 }
	 cout << endl;*/
	 //zad.5
	 /*int fahr, celsius;
	 int start, limit, krok;
	 start = 0;
	 limit = 200;
	 krok = 20;
	 fahr = start;
	 for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) 
	 {
		 float celsius = (5 / 9) * (fahr - 32.0);
		 cout << fahr << "\t" << celsius << endl;
	 }
	 cout << endl;*/
	 //zad.6
	 /*int fahr, celsius;
	 int start, limit, krok;
	 start = 0;
	 fahr = start;
	 cout << "Podaj limit: ";
	 cin >> limit;
	 cout << "Podaj krok: ";
	 cin >> krok;
	 for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
	 {
		 float celsius = (5 / 9) * (fahr - 32.0);
		 cout << fahr << "\t" << celsius << endl;
	 }*/
	 cout << endl;
	 //zad.7
	 /*int x; float y;
	 for(x=0; x<=10;x++){
		 cout << "podaj liczbe";
		 cin >> y;
		 if (y > 0) {
			 cout << y;
		 }
		 }*/
		 cout << endl;
	 
	 //zad.8
	 /*int a;
	 for (a = 0; a <= 100; a+=2) {
		 cout << a;
	 }*/
	 cout << endl;
	 //zad.9
	 int a, n;
	 cout << "podaj liczbe:";
	 cin >> n;
	 for (a = 0; a <= 100; a++) {

		 if (a%n==0) {
			 cout << a;
		 }
	 }

	 
		return 0;
}
