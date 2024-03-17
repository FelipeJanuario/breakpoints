#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        int option;
        cout << "Digite a Opção desejada:\n";
        cout << "1. Opção 1\n";
        cout << "2. Opção 2\n";
        cout << "3. Opção 3\n";
        option = 0;
        cin >> option;
        switch (option)
        {
            case 1:
                cout << "Você escolheu a primeira Opção\n";
                break;
            case 2:
                cout << "Você escolheu a segunda Opção\n";
                break;
            case 3:
                cout << "Você escolheu a terceira Opção\n";
                break;
            default:
                cout << "Você escolheu uma Opção inválida!\n";
        }
        system("PAUSE > null");
        return 0;
    }
