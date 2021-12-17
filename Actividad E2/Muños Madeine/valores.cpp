#include<iostream>
using namespace std;
int main()
{
float va,con=0,li,total=0,s=0,se=0;
cout<<" Cuantos valores  desea ingresar ";
cin>>li;
do{
	cout<<" Ingrese los valores ";
	cin>>va;
	con=con+1;
	total=total+va;
	if(va>0){
		s=s+va;
}else{
	se=se+va;
}
}while(con<li);
cout<< "EL saldo de egresos es: "<<se<<endl;
cout<< "El saldo de ingreso es: "<<s<<endl;
cout<< "El sado total es: "<<total<<endl;
return (0);
}
  	
