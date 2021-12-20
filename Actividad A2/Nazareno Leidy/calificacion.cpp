#include<iostream>
using namespace std;

int main()

{
      
	int x,f=30,p=0;
	float pa=0,pr=0;

	do
	{

	cout<<"Ingsese su puntuacion: "<<x<<endl;
	p=p+1;
	if(x>7)
	{
		pa=pa+1;
	}
	else
	{
		if(x<5)
		{
			pr=pr+1;
		}

	}

	 }while(p<f);

	cout<<"***APROBADO***"<<pa<<endl;
	cout<<"***REPROBADO***"<<pr<<endl;

	return 0;


}
