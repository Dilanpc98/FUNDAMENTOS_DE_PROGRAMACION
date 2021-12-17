#include <iostream>
using namespace std;
int main()
{
float ar, be=0,Lin=30,apr=0,rep=0;
do{
cout<<"Ingrese el promedio: "; cin>>ar;
be=be+1;
if(ar>7){
	apr=apr+1;
}else{
	if(ar<5){
		rep=rep+1;
	}else{}
}
}while(be<Lin);
cout<<"Aprueban "<<apr<<endl;
cout<<"Reprueban "<<rep<<endl;
return (0) ;
}