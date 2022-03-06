// Programa para resolver triangulos por la ley de senos y ley de cosenos .
// Tambien podemos hallar el area y perimetro del triangulo .
// Nombre: Univ. Viviana Laura Paco        C.I. 7091538     fecha : 04/03/22
// Materia: ETN 307 LABORATORIO N#2      Docente: Ing. Juan Carlos Duchen

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std ;
int main ()
{
    float a , b , c;
    float m , n , p;
    float Area , S ;
    int op;
    do{
		cout << " PROGRAMA PARA RESOLVER TRIANGULOS " << endl;
		cout << " Calcular." << endl;
		cout << " 1.- Lado b , Lado c y Angulo p . " << endl;
		cout << " 2.- Lado b , Angulo m  y Angulo p . " << endl;
		cout << " 3.- Area y Perimetro. " << endl;
		cout << " 4.- Salir"<<endl;
		cin >>op;
		switch(op){
			case 1:	cout << " Ingresar el valor del lado a." << endl;
					cin >> a;
					cout << " Ingresar el valor del angulo m en grados." << endl;
					cin >> m;
					cout << " Ingresar el valor del angulo n en grados." << endl;
					cin >> n;
					n=n*(3.1416/180);
					m=m*(3.1416/180);
					p =(3.1416 - m - n);
					c=(a*sin(n))/sin(m) ;
					b=sqrt(a*a + c*c-2*a*c*cos(p));

					cout << " El angulo p es : " << endl  << p*(180/3.1416)<<"°"<< endl ;
					cout << " El lado b es : "<< endl  << b << endl ;
					cout << " El lado c es : " << endl  << c << endl ;
					system("pause");
					system("cls");
					break;
			case 2: cout << " Ingresar el valor del lado a." << endl;
					cin >> a;
					cout << " Ingresar el valor del lado c." << endl;
					cin >> c;
					cout << " Ingresar el valor del angulo n en grados." << endl;
					cin >> n;
					n=n*(3.1416/180);
					m=asin((a*sin(n))/c);
					p =(3.1416 - m - n);
					b=sqrt(a*a+ c*c-2*a*c*cos(p));

                    cout << " El angulo de m es : " << endl  << m*(180/3.1416)<<"°"<< endl ;
					cout << " El angulo de p es : "<< endl  << p*(180/3.1416)<<"°" << endl ;
					cout << " El lado b es : " << endl  << b << endl ;
                    system("pause");
					system("cls");
					break;
            case 3: cout << " Ingresar el valor de a." << endl;
					cin >> a;
					cout << " Ingresar el valor de b." << endl;
					cin >> b;
                    cout << " Ingresar el valor de c." << endl;
					cin >> c;
                    S=(a+b+c)/2 ;
					Area=sqrt(S*(S-a)*(S-b)*(S-c)) ;
                    cout << " El perimetro del triangulo es : " << endl  << a+b+c << endl ;
                    cout << " El area del triangulo es : " << endl  << Area << endl ;
                    system("pause");
					system("cls");
					break;
               default: break;
			}
		system("cls");	
		}while(op!=4);
   return 0; 
 }
