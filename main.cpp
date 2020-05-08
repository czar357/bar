#include <bits/stdc++.h>

using namespace std;

int main()
{   string d;
    int a,b,c;
    double e, f, h;
    cout<<fixed<<setprecision(2);
    cout << "Insira seu sexo: (F ou M)" << endl;
    cin>>d;
    cout << "Insira a quantidade de cervejas consumidas: " << endl;
    cin>>a;
    cout << "Insira a quantidade de refrigerantes consumidos: " << endl;
    cin>>b;
    cout << "Insira a quantidade de espetinhos consumidos: " << endl;
    cin>>c;

    f = (a*5.0)+(b*3.0)+(c*7.0);

    cout<<endl<<"RELATORIO"<<endl;
    cout<<endl<<"Consumo = R$ "<<f<<endl;
    if(f<=30.0){
        cout<<"Couvert = R$ 4.00"<<endl;
        e =4.00;}
    else{
        cout<<"Couvert = R$ 0.00"<<endl;
        e=0;
    }
   if (d=="F"){
        h=8.0;
        cout<<"Ingresso = R$ 8.00"<<endl;
    }
    if (d == "M"){
        h=10.0;
        cout<<"Ingresso = R$ 10.00"<<endl;
    }
    cout<<endl<<"Valor a pagar: R$"<< e + f + h<<endl;
    return 0;
}
