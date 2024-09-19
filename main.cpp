#include <iostream>

using namespace std;

int main()
{
    int choice = 0;

    cout << "Paprastas meniu pasirinkimas\n";
    cout << "[1]: Pirma opcija\n";
    cout << "[2]: Antra opcija\n";
    cout << "[3]: Trecia opcija\n";
    cout << "[4]: Iseiti is programos\n";

    cout << "Iveskite jusu pasirinkta opcija (skaiciu):";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Jus pasirinkote opcija #1\n";
        break;
    case 2:
        cout << "Jus pasirinkote opcija #2\n";
        break;
    case 3:
        cout << "Jus pasirinkote opcija #3\n";
        break;
    case 4:
        cout << "Programa baigia savo darba...\n";
        break;
    default:
        cout << "Neteisingas pasirinkimas. Bandykite is naujo.\n";
        break;
    }

    return 0;
}
