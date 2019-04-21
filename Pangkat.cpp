#include <iostream>
#include <cmath>
using namespace std;

double pangkat (double a, double p){
return(exp(p*log(a)));
}

int main (){
double a,p,hasil;
cout<<" Inputkan angka =";
cin>>a;
cout<<" Inputkan pangkat =";
cin>>p;cout<<endl;

hasil=pangkat(a,p);
cout<<"Hasil pangkatnya adalah  = "<<hasil<<endl;


return 0;
}


