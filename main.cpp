#include <iostream>

using namespace std;

int main()
{
    // Uzduotis 1-2
    cout << "1-as (2-as) uzduotis:\n";

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

    // Uzduotis 3-4
    cout << "\n3-as (4-as) uzduotis:\n";

    int exam_grade = 0;
    cout << "Iveskite savo egzamino pazymi (1-10):";
    cin >> exam_grade;

    switch (exam_grade)
    {
    case 10:
        cout << "Puiku!\n";
        break;
    case 9:
        cout << "Labai gerai\n";
        break;
    case 8:
        cout << "Gerai\n";
        break;
    case 7:
        cout << "Gerai\n";
        break;
    case 6:
        cout << "Patenkinamai\n";
        break;
    case 5:
        cout << "Patenkinamai\n";
        break;
    case 4:
        cout << "Egzaminas neislaikytas\n";
        break;
    case 3:
        cout << "Egzaminas neislaikytas\n";
        break;
    case 2:
        cout << "Egzaminas neislaikytas\n";
        break;
    case 1:
        cout << "Egzaminas neislaikytas\n";
        break;
    default:
        cout << "Ivestas netinkamas skaicius... Bandykite is naujo.\n";
        break;
    }

    // if (exam_grade > 10)
    //     cout << "Ivestas per didelis skaicius! Bandykite is naujo.\n";
    // else if (exam_grade < 1)
    //     cout << "Ivestas per mazas skaicius! Bandykite is naujo.\n";
    // else if (exam_grade == 10)
    //     cout << "Puiku!\n";
    // else if (exam_grade >= 9)
    //     cout << "Labai gerai\n";
    // else if (exam_grade >= 7)
    //     cout << "Gerai\n";
    // else if (exam_grade >= 5)
    //     cout << "Patenkinamai\n";
    // else if (exam_grade < 5)
    //     cout << "Egzaminas neislaikytas\n";

    cout << "\n5-as uzduotis:\n";
    int odd_sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
            odd_sum += i;
    }
    cout << "Nelyginiu skaiciu suma intervale [1-20]: " << odd_sum << '\n';

    return 0;
}
