#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
//deklarasi array dengan 7 elemen
int A[7];
int j,k,i,temp;
int jmax,u=6;
//memasukkan nilai sebelum diurutkan
cout<<"Masukkan nilai pada elemen array :"<<endl;
for(i=0;i<7;i++)
{
cout<<"A["<<i<<"]=";
cin>>A[i];
}
//Proses pengurutan secara menaik (Ascending)
for(j=0;j<7;j++)
{
jmax=0;
for(k=1;k<=u;k++)
if (A[k] > A[jmax])
jmax=k;
temp=A[u];
A[u]=A[jmax];
A[jmax]=temp;

}
//menampilkan nilai setelah diurutkan
cout<<"\nNilai setelah diurutkan ="<<endl;
for(i=0;i<7;i++){
cout<<A[i]<<"  ";
}
getch();
}
