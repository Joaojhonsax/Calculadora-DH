#include <iostream>

using namespace std;

int main()
{
    int valor;
    bool executa = true;
    int bin[8];
    while (executa){
    valor = 0;
    cout << "Escolha um dos valores" << endl;
    cout << " 1 Decimal para Binario" << endl;
    cout << " 2 Binario para Decimal" << endl;
    cout << " 0 para Sair" << endl;
    cin >> valor;
    cout << valor <<" = Valor digitado" << endl;
    if(valor == 0){
        cout << "Saindo do Programa";
        executa = false;
        exit;
    }else{
        if(valor == 1){
            int decimal;
            cout << "Digite o valor em Decimal para ser convertido" << endl;
            cin >> decimal;
            cout<< "O valor em Decimal digitado foi: " << decimal << endl;
            for(int i = 7; i>= 0; i--){
                if(decimal % 2 == 0){
                    bin[i] = 0;
                }else{
                    bin[i] = 1;
                }
                 decimal  = decimal / 2;
                }
                for(int i = 0; i <8; i++){
                    cout << bin[i];
                }
                cout << endl;
                }else{
                if (valor == 2){
                    cout << "Digite o numero Binario a ser convertido"  << endl;
                    cin >> valor;
                    cout << "O numero Binario digitado foi: " << valor << endl;
    }
    }
    }
    }
    return 0;
    }


