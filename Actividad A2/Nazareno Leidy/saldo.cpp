#include<iostream>
using namespace std;

int main()

{
	int x,l,a=0,d=0;
	float di=0,de=0;

	cout<<"Ingrese el limite: "; cin>>l;
	do {
	cout<<"Ingrese los valores: "; cin>>x;

	a=a+1;
	d=d+x;

	if(x>0)
	{
		di=di+x;
	}
	else 
	{
		de=de+x;
	}

         }while(a<l);

	cout<<"El ingreso es : "<<di<<endl;
	cout<<"El egreso es : "<<de<<endl;
	cout<<"El saldo total es: "<<d<<endl;


	return 0;

}
