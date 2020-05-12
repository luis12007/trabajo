#include<iostream>
#include<math.h>

using namespace std;

int main(){
 float a,b,c,D=0,resultado1 = 0,resultado2=0,im1=0,im2 = 0;
 
 cout<<"Digite el valor de a: "; cin>>a;
 cout<<"Digite el valor de b: "; cin>>b;
 cout<<"Digite el valor de c: "; cin>>c;
 
 D=(pow(b,2)-4*a*c);
 
 
  if (D>=0)
  {  
 resultado1 = (-b+sqrt(D))/(2*a);
 resultado2 = (-b-sqrt(D))/(2*a);
 
 cout<<"\nLa raiz 1 es: "<<resultado1<<endl;
 cout<<"La raiz 2 es: "<<resultado2<<endl;
 
 /////////////////////////////////////////////////////////////////////////
 
 }
 else
 {
 resultado1 = (-b)/(2*a);
 resultado2 = (-b)/(2*a);
 D = -1*(D);
 im1= (pow(D,0.5))/(2*a);
 im2= ((-1)*pow(D,0.5))/(2*a);
 
 cout<< "\nLa ecuacion insertada tiene raices complejas : "<<endl;
 cout<<"\nLa raiz 1 es: "<<resultado1<<" + "<<im1<<"i"<<endl;
 cout<<"La raiz 2 es: "<<resultado2<<" + "<<im2<<"i"<<endl;
 }
 return 0;
}