#include<iostream>

using namespace std;
int nombre(){
	
	cout<<"\nCerrado";
	return 0;
	
}
int main(){
	
	char repetir;
	do{
	int operacion;
	double s,r,m,d,a, b;
	
	cout<<"digite el numero de acuerdo a la operacion que desea \n1:suma \n2:resta \n3:multiplicaion \n4:division\n:  ";
	cin>>operacion;
	
	cout<<"digite el numero a:  ";
	cin>>a;
	cout<<"digite el numero b:  ";
	cin>>b;
	
	s=a+b;
	r=a-b;
	m=a*b;
	d=a/b;
	
	switch(operacion){
		case 1: cout<<"la suma es:  "<<s; break;
		case 2: cout<<"la resta es:  "<<r; break;
		case 3: cout<<"la multiplicacion es:  "<<m; break;
		case 4: cout<<"la division es:  "<<d; break;
		
		default: cout<<"no se ha elegido operacion"; break; 

	}
	cout<<"\n desea rpetir el programa presione o/O:  "; cin>>repetir;
	
	} while (repetir=='o'||repetir=='O');
	
	nombre();
	
	return 0;
}
