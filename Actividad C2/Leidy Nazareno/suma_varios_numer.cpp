#include<iostream>
using namespace std;

int main()

{ 

  int p=0,r;
  float q=0,o;

  cout<<"Ingrese la cantidad de valore a suma: ";
  cin>>r;

  do
    {
	    cout<<"Ingrese el elemento "<<p+1;
	    cin>>o;

	    p=p+1;
	    q=q+o;
     } while (p<r);

  cout<<"La suma de los elementos fue: "<<q<<endl;


  return (0);


}
