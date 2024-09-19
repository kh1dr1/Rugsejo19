#include <iostream>

using namespace std;

int main()
{
    int studentMark = 0;
    int sum = 0;
    int count = 0;

    while (true)
    {
        cout << "Iveskite studento pazymi (1-10; 0 - baigti ivedima):";
        cin >> studentMark;

        if (studentMark == 0)
            break;

        if (studentMark < 1 || studentMark > 10)
        {
            cout << "Studento pazymis turi buti tarp 1 ir 10. Bandykite is naujo.\n";
            continue;
        }

        sum += studentMark;
        count++;
    }

    if (count == 0)
        count = 1;

    float average = static_cast<float>(sum) / static_cast<float>(count);

    cout << "Studento pazymiu vidurkis:" << average << endl;

    if (average >= 5)
        cout << "Vidurkis teigiamas." << endl;

    return 0;
}
