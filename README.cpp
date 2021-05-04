#include <iostream>
using namespace std;

int main()
{
    int escolha;   
    float pnp, massa;
    
    cout << "Digite a sua massa na Terra em kg: " << endl;
    cin >> massa;

    cout << "\nEscolha o Planeta: \n1 para Mercúrio \n2 para Vênus \n3 para Marte \n4 para Júpter \n5 para Saturno \n6 para Urano " << endl;
    cin >> escolha;

    switch(escolha) {
        case 1:
            pnp = ((massa*10)/10)*0.37;
            cout << "Seu peso em Mercúrio é " << pnp << " kg" << endl;
            break;
        case 2:
            pnp = ((massa*10)/10)*0.88;
            cout << "Seu peso em Vênus é " << pnp << " kg" << endl;
            break;
        case 3:
            pnp = ((massa*10)/10)*0.34;
            cout << "Seu peso em Marte é " << pnp << " kg" << endl;
            break;
        case 4:
            pnp = ((massa*10)/10)*2.64;
            cout << "Seu peso em Júpter é " << pnp << " kg" << endl;
            break;
        case 5:
            pnp = ((massa*10)/10)*1.15;
            cout << "Seu peso em Saturno é " << pnp << " kg" << endl;
            break;
        case 6:
            pnp = ((massa*10)/10)*1.17;
            cout << "Seu peso em Urano é " << pnp << " kg" << endl;
            break;
        default:
            cout << "Verifique o número digitado!\n";
            break;
    }
}
