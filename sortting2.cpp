#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main (){
int i,j, b, k, m, n,x,z,ketemu=0;
int data['n'], temp[100];
cout<<"\n======================\n"<<endl;
cout<<"\n�-BELAJAR SORTING�\n";
cout<<"\n======================\n"<<endl;
cout<<"Inputkan Banyak Data: ";
cin>>n;
for(i=0; i<n; i++){
cout<<"Data Ke-"<<i<<" : ";
cin>>data[i];
}
cout<<"\n\n";
cout<<"Data Sebelum diurutkan"<<endl;
for(int i=0; i<n; i++){
cout<<i+1<<".";
cout<<data[i]<<" ";
cout<<endl;
}
for (i=0; i<n; i++){
for (j=0; j<=i; j++)
{
if(data[i]<data[j])
{
m=data[i];
data[i]=data[j];
data[j]=m;
}
}
cout<<"\n#"<<i<<": ";
for(k=0; k<=i; k++)
{
cout<<" "<<data[k];
}
}
cout<<"\n\n";
cout<<"\nData Setelah Diurutkan (Ascending):"<<endl;
for(i=0; i<n; i++){
cout<<i+1<<" ";
cout<<data[i]<<" "<<endl;}
for (i=0; i<n; i++){
for (j=0; j<=i; j++)
{
if(data[i]>data[j])
{
m=data[i];
data[i]=data[j];
data[j]=m;
}
}
cout<<"\n#"<<i<<": ";
for(k=0; k<=i; k++)
{
cout<<" "<<data[k];
}
}
cout<<"\n\n";
cout<<"\nData Setelah Diurutkan (Descending):"<<endl;
for(i=0; i<n; i++){
cout<<i+1<<".";
cout<<data[i]<<" "<<endl;
}
getch();
}
