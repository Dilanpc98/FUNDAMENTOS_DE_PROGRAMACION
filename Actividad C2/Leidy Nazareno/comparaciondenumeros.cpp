#include<iostream>
using namespace std;

int main()

{
    float m,n;
    cout<<"Ingrese el primer numero: "; cin>>m;
    cout<<"Ingrese el segundo numero: "; cin>>n;
    
    if(m==n)
    {
      cout<<"m = "<<m<< " es igual a n = "<<n<<endl;

     }else{
	      if(m<n)
	      {
		cout<<"m = "<<m<< " es menor a n = "<<n<<endl;

	      }else{ 

		cout<<"n = "<<n<< " es menor a m = "<<m<<endl;
	      }
     }
    return (0);
}
