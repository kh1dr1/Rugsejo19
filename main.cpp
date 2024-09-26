#include <iostream>

using namespace std;

int main()
{
    // Uzduotis 1-2
    /*
    cout << "Uzduotis 1-2:\n";
    
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
    else
        cout << "Vidurkis yra neigiamas" << endl;
    */

    // Uzduotis 3-4
    cout << "Uzduotis 3-4:\n";

    int exam_grade = 0;
    cout << "Iveskite savo egzamino pazymi (1-10):";
    cin >> exam_grade;

    if (exam_grade > 10)
        cout << "Ivestas per didelis skaicius! Bandykite is naujo.\n";
    else if (exam_grade < 1)
        cout << "Ivestas per mazas skaicius! Bandykite is naujo.\n";
    else if (exam_grade == 10)
        cout << "Puiku!\n";
    else if (exam_grade >= 9)
        cout << "Labai gerai\n";
    else if (exam_grade >= 7)
        cout << "Gerai\n";
    else if (exam_grade >= 5)
        cout << "Patenkinamai\n";
    else if (exam_grade < 5)
        cout << "Egzaminas neislaikytas\n";

    return 0;
}
