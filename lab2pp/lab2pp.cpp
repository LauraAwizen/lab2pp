

#include <iostream>
#include <cstdlib>
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
	 /*int a, n;
	 cout << "podaj liczbe:";
	 cin >> n;
	 for (a = 0; a <= 100; a++) {

		 if (a%n==0) {
			 cout << a;
		 }*/
		 //zad.10 
		 int n, x, licznik;     
		 licznik=0;     
		 cout <<"podaj liczbę:";     
		 cin >>n;     
		 for(x=0;x<=100;x++){         
			 if(x%n==0){        
				 licznik++;          
			 }     
		 }    
		 cout<<"liczb podzielnych przez"<<n<<"jest:"<<licznik;     
		 cout<<endl; 
		 //zad.11     
		 int a,b,y;     
		 cout <<"podaj 2 liczby:";     
		 cin >>a>>b;    
		 if(a<b){         
			 for(y=a;y<=b;y++){             
				 if(y%3==0){                 
					 cout <<y;            
				 }        
			 }    
		 }     if(b<a){         
			 for(y=b;y<=a;y++){            
				 if(y%3==0){                  
					 cout <<y; 
				 } 
			 }     
		 }
		 //zad.12 
		 int n, x; 
		 float y, suma=0;  
		 cout <<"podaj liczbę:";  
		 cin>>n;  
		 for(x=0; x<=n; x++){     
			 cout<<"podaj liczbe rzeczywista:";    
			 cin>>y;     
			 suma+=y;  
		 } 
		 cout<<endl<<suma/n; 
		 //zad.13 
		 /*int x;
		 for(x=100;x>=0;x--){ cout<<x; } 
		 //zad.15  
		 int m, n, i; 
		 cout<<"podaj 2 liczby:"; 
		 cin>>m>>n; 
		 for(i=0; i<n; i++){ 
			 int wylosowana=  rand() % (m + 1); 
			 cout<<wylosowana; 
		 } */
		 //zad.16 
		 int x, i, suma=0,wylosowana; 
		 cout<<"podaj liczbe:"; 
		 cin>>x; 
		 for(i=0; i<10; i++){ 
			 wylosowana= rand ()% 10 + 1; 
			 if(wylosowana == x){ 
				 suma++; 
			 } 
			 cout<<wylosowana; 
		 } 
		 cout<<endl<<"szczesliwy numerek pojawil sie "<<suma<<" razy"; 
	 }

	 
		return 0;
}
