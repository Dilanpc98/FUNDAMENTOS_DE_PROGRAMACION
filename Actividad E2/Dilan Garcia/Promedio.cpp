#include <iostream>
using namespace std;
int main()
{
float a, b=0,Li=30,ap=0,re=0;
do{
cout<<"Ingrese el promedio: "; cin>>a;
b=b+1;
if(a>7){
	ap=ap+1;
}else{
	if(a<5){
		re=re+1;
	}else{}
}
}while(b<Li);
cout<<"Aprueban "<<ap<<endl;
cout<<"Reprueban "<<re<<endl;
return (0) ;
}
