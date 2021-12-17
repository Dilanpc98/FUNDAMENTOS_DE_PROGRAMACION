#include<iostream>
using namespace std;
int main()
{

float pro,m=0,li=30,ax=0,rs=0;
do{
cout<<"Ingrese el promedio";
cin>> pro;
m=m+1;
if(pro>7)
{
	ax=ax+1;
}else
{
	if(pro<5)
	{	
		rs=rs+1;
	}else
	{
	}
}
}while(m<li);
cout<<"Aprobado"<<ax<<endl;
cout<<"Reprobado"<<rs<<endl;
return(0);        
}	
