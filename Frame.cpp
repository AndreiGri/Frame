#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 1F");

    cout << endl;

    int width, height;
    char c1 = '|';
    char c2 = '-';

    cout << " Введите ширину и высоту рамки: ";
    cin >> width >> height;

    for (int row = 1; row <= height; row++) {
        for (int col = 1; col <= width; col++) {
            if (col == 1 || col == width) {
                cout << c1;
            }
            else {
                if ((row == 1 || row == height) && (col > 1 && col < width)) {
                    cout << c2;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}