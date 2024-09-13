#include<iostream>
using namespace std;

int fatorial(int n){
     if (n == 1 || n == 0)
     {
        return 1;
     }else
     {
        return n*fatorial(n-1);
     }
     
     
}

int main(int argc, char const *argv[])
{
    int numero;
     cout << "Digite um valor" << endl;
     cin >> numero;
      cout << fatorial(numero) << endl;

     fatorial(numero);

    
    return 0;
}
