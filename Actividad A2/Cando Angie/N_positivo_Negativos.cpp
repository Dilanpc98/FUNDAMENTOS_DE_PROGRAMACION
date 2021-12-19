#include <iostream>
using namespace std;
int main ()
{
float x,c=0,l,s=0,si=0,se=0;
cout<<"Cuantos valores desea ingresar: "; cin>>l;
do{
cout<<"Ingrese los valores: "; cin>>x;
c=c+1;
s=s+x;
if(x>0){
si=si+x;
}else{
se=se+x;
}
}while(c<l);
cout<<"El saldo en egreseos es: "<<se<<endl;
cout<<"El saldo en ingeesos es: "<<si<<endl;
cout<<"El saldo total es: "<<s<<endl;
return (0);
}
