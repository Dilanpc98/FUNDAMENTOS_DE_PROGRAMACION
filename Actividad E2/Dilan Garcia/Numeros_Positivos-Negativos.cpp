#include <iostream>
using namespace std;
int main()
{
float a,con=0,li,stotal=0,singre=0,segre=0;
cout<<"Cuantos valores va ingresar: "; cin>>li;
do{
cout<<"Ingrese los valores: "; cin>>a;
con=con+1;
stotal=stotal+a;
if(a>0){
	singre=singre+a;
}else{
	segre=segre+a;
}
}while(con<li);
cout<<"El saldo de egresos es: "<<segre<<endl;
cout<<"El saldo de ingresos es: "<<singre<<endl;
cout<<"El saldo total es: "<<stotal<<endl;
}
