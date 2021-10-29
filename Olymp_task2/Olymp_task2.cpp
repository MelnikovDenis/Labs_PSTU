#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int num, attempts;
    srand(time(NULL)); 
    int randomNum = rand() % 100 + 1;

    int count = 0;
    bool flag = true;   
    cout << "Введите кол-во попыток: ";
    cin >> attempts;   
    while (flag)
    {       
        cout << "Введите число от 1 до 99: ";
        cin >> num;
        if (num > randomNum) cout << "Загаданное число меньше!\n";
        else if (num < randomNum) cout << "Загаданное число больше!\n";
        else {
            cout << "Вы угадали!\n";
            flag = false;
        }
        count++;
        if ((flag) && (count == attempts)) {
            cout << "Вы не справились, загаданное число: " << randomNum << '\n';
            flag = false;
        }
    } 
    return 0;
}
