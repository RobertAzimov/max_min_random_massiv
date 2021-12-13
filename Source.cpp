#include <iostream>

using namespace std;
int main()
{
    system("CHCP 1251");
    cout << "массив из рандомных чисел ";
    int randomDigits[5] = {};

    for (int i = 0; i < 5; i++)
    {
        randomDigits[i] = rand() % 99;
        cout << randomDigits[i] << "  ";

    }

    int max = randomDigits[0];
    int min = randomDigits[0];

    for (int i = 0; i < 5; i++)
    {
        if (randomDigits[i] > max) {
            max = randomDigits[i];

        }

        if (randomDigits[i] < min) {
            min = randomDigits[i];
        }

    }
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    return 0;
}
