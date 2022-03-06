// PROGRAMA PARA RESOLVER 2 ECUACIONES CON 2 INCOGNITAS  fecha : 02/03/22
// Nombre:Univ. Viviana Laura Paco       C.I. 7091538
// Materia: ETN 307 LABORATPRIO N#2      Docente:Ing. Juan Carlos Duchen
#include <iostream>
using namespace std;
int main()
{
float x1,y1,re1,x2,y2,re2,y,x,z,xr,yr,zr;

cout<<" PROGRAMA PARA RESOLVER 2 ECUACIONES CON 2 INCOGNITAS "<<endl;
cout<<"Primera Ecuacion "<<endl;
cout<<"Ingresar el valor de X: ";
cin>>x1;
cout<<"Ingresar el valor de Y: ";
cin>>y1;
cout<<"Ingresar el valor del resulado: ";
cin>>re1;
cout<<endl<<endl;
cout<<"Segunda Ecuacion"<<endl;
cout<<"Ingresar el valor de X: ";
cin>>x2;
cout<<"Ingresar el valor de Y: ";
cin>>y2;
cout<<"Ingresar el valor del resultado: ";
cin>>re2;
cout<<endl<<endl;
x=-x2*x1;
y=-x2*y1;
z=-x2*re1;

xr=x1*x2;
yr=x1*y2;
zr=x1*re2;

x=x+xr;
y=y+yr;
z=z+zr;
y=z/y;

z=re1-y*y1;
x=z/x1;

cout<<"EL VALOR DE Y ES: "<<y<<endl;
cout<<"EL VALOR DE X ES: "<<x<<endl;

system("pause");

return 0;
}
