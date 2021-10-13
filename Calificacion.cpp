/*La calificación final de un estudiante es el promedio de tres notas:
la nota de trabajos que cuenta un 30% del total, la nota del examen 
que cuenta un 60% y la nota de participación que cuenta el 10% restante. 
Escriba un programa que lea las tres notas del alumno y escriba su nota final.*/
#include <iostream>

using namespace std;

int main(){
	float n1,n2,n3,t=0,e=0,n=0,total=0;
	cout<<"Ingrese la calificaion de trabajos"<<endl;
	cin>>n1;
	cout<<"Ingrese la calificacion del examen"<<endl;
	cin>>n2;
	cout<<"Ingrese la calificacion de la participacion"<<endl;
	cin>>n3;
	t=n1*0.30;
	e=n2*0.60;
	n=n3*0.10;
	total=t+e+n;
	cout<<"Su nota obtenida es: "<<total;
	return 0;
}
