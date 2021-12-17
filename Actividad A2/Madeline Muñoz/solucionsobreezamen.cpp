#include<iostream>
using namespace std;
int main()
{

float x,c=0,l=30,ca=0,cr=0;
do{
	cout<<"Ingrese el promedio";
	cin>> x;
	c=c+1;
	if(x>7){
		ca=ca+1;
	}else{
		if(x<5){
			cr=cr+1;
		}else{
		}
	}
}while(c<1);
cout<<"Aprueban"<<ca<<endl;
cout<<"Reprueban"<<cr<<endl;
return(0);
}

	
