// PROGRAMA SOLUCION DE POLINOMIOS POR HORNER  fecha : 02/03/22
// Nombre:Univ. Viviana Laura Paco       C.I. 7091538
// Materia: ETN 307 LABORATPRIO N#2      Docente:Ing. Juan Carlos Duchen
#include <iostream>

using namespace std;
int main(){
float Num[999],Den[999],cosiente[999],suma[999];
float mat[99][99];
int n,m,i,j;
cout<<"ingrese el grado del polinomio del Numerador : ";
cin>>n;

for(i=0;i<=n;i++){
	cout<<"inserte el valor de x^"<<n-i<<" : ";
	cin>>Num[i];
	suma[i]=0;
	}
cout<<"ingrese el grado del polinomio del Denominador : ";
cin>>m;

for(i=0;i<=m;i++){
	cout<<"inserte el valor de x^"<<m-i<<" : ";
	cin>>Den[i];
	if(i>=1){
		Den[i]=Den[i]*(-1);
		}
	}
cosiente[0]=Num[0]/Den[0];
	
	
for(j=0;j<=n-m;j++){
	
	for(i=0;i<=n;i++){
		if(i<=j){
			mat[j][i]=0;
			}
		else{
			mat[j][i]=cosiente[j]*Den[i-j];
			}
		suma[i]=suma[i]+mat[j][i];
		}
	cosiente[j+1]=(Num[j+1]+suma[j+1])/Den[0];
	}
cout<<endl<<endl;
cout<<"\nEl cosiente"<<endl;
for(i=0;i<=n-m;i++){
	if(i<n-m){
		cout<<cosiente[i]<<"x^"<<n-m-i<<" + ";
		}
	else{
		cout<<cosiente[i]<<"x^"<<n-m-i;
		}	
	}
cout<<"\nEl residuo"<<endl;

for(i=n-m+1;i<=n;i++){
	if(i<n){
		cout<<suma[i]+Num[i]<<"x^"<<n-i<<" + ";
		}
	else{
		cout<<suma[i]+Num[i]<<"x^"<<n-i;
		}
	}
return 0;
}
