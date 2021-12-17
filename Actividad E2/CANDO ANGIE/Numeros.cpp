#include <iostream>
using namespace std;
int main()
{
float b,co=0,limi,sto=0,sing=0,seg=0;
cout<<"Cuantos valores va ingresar: "; cin>>limi;
do{
cout<<"Ingrese los valores: "; cin>>b;
co=co+1;
sto=sto+b;
if(b>0){
	sing=sing+b;
}else{
	seg=seg+b;
}
}while(co<limi);
cout<<"El saldo de egresos es: "<<seg<<endl;
cout<<"El saldo de ingresos es: "<<sing<<endl;
cout<<"El saldo total es: "<<sto<<endl;
}