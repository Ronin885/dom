

#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{// задание 1

    setlocale(LC_ALL, "rus");

    /*int VerGor;
    int speed, a = 0;
    char vvodLin;
    while (true)
    {
        cout << "Выбрать направление линии - 1 - Горизонтальная/ 2 - Вертикальная" << endl;
        cin >> VerGor;
        if (VerGor == 1 || VerGor == 2)
            break;
        cout << "Неверный ввод." << endl;
        cout << "Ввести снова : ";
    }
    while (true)
    {
        cout << "Выбрать скорость линии - 1 - медленная скорость, 2 - средняя скорость, 3 быстрая скорость" << endl;
        cin >> speed;
        if (speed == 1 || speed == 3 || speed == 2)
            break;
        cout << "Неверный ввод." << endl;
        cout << "Ввести снова : ";
    }
    cout << "Ввести тип линии : " << endl;
    cin >> vvodLin;

    switch (speed)
    {
    case 1:
         {
        a = 2000;
        break;
         }
    case 2:
          {
        a = 1000;
        break;
          }
    case 3:
         {
        a = 500;
        break;
         }
    }
    switch (VerGor)
    {
    case 1:
        for (int i = 0; ; i++)
        {
            Sleep(a);
            cout << vvodLin;
        }
    case 2:
        for (int i = 0; ; i++)
        {
            Sleep(a);
            cout << vvodLin << endl;
        }
    }*/
 // задание 2
    int f;
    int player, comp;
    int go;
    int vhod, vhod1;
    
    while (true)
    {
        cout << "______________МЕНЮ ИГРЫ______________" << endl;
        cout << "|                                   |" << endl;
        cout << "|          1. НАЧАТЬ ИГРАТЬ         |" << endl;
        cout << "|                                   |" << endl;
        cout << "|                                   |" << endl;
        cout << "|          2. ВЫЙТИ С ИГРЫ          |" << endl;
        cout << "|                                   |" << endl;
        cout << "|___________________________________|" << endl;
        cout << "ГОТОВ К ИГРЕ? (1 - да / 2 - нет) - ";
        cin >> vhod;
        cout << endl;
        switch (vhod)
        {
        case 1:
            system("cls");
            cout << "ОТЛИЧНО. ПОЕХАЛИ! :-)" << endl;
            cout << endl;
            cout << "ИГРА <КУБИКИ>" << endl;
            cout << endl;
            cout << "ПРАВИЛА : " << endl;
            cout << "ИГРОК КИДАЕТ С КОМПЬЮТЕРОМ ПО ОЧЕРЕДИ ДВА КУБИКА" << endl;
            cout << "ПОБЕЖДАЕТ ТОТ, У КОГО СУММА ИЗ ТРЕХ БРОСКОВ БУДЕТ БОЛЬШЕ" << endl;
            cout << "НУ ЧТО, ПОЕХАЛИ, УДАЧИ ТЕБЕ ХА-ХА-ХА" << endl;
            cout << endl;
            cout << "нажми любую кнопку, чтобы продолжить..." << endl;
            cin >> go;
            system("cls");
            while (true)
            {
                
                cout << "БРОСЬ КУБИК!" << endl;
                cout << "нажми <1> чтобы бросить : ";
                cin >> f;
                cout << endl;
                cout << "ОТЛИЧНО!" << endl;
                Sleep(1000);
                f = 1 + rand() % 6;
                switch (f)
                {
                case 1:
                {
                    cout << "_____________" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|     *     |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|___________|" << "\n";
                    
                    break;
                    
                }
                case 2:
                {
                    cout << "_____________" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|     *     |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|     *     |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|___________|" << "\n";
                    break;
                }
                case 3:
                {
                    cout << "_____________" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *         |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|     *     |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|         * |" << "\n";
                    cout << "|___________|" << "\n";
                    break;
                }
                case 4:
                {
                    cout << "_____________" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|___________|" << "\n";
                    break;
                }
                case 5:
                {
                    cout << "_____________" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "|     *     |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|___________|" << "\n";
                    break;
                }
                case 6:
                {
                    cout << "_____________" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|           |" << "\n";
                    cout << "| *       * |" << "\n";
                    cout << "|___________|" << "\n";
                    break;
                }
                
                }
                if (f == 3)
                    break;
            }
            case 2:
            {
                system("cls");
                cout << "ОЧЕНЬ ЖАЛЬ, ВСЕГО ХОРОШЕГО! :-)" << endl;
                break;
            }
            
        }
       
        if (vhod == 1 || vhod == 2)
            break;
        system("cls");
        cout << "ОЙ! ЧТО-ТО ПОШЛО НЕ ТАК, ПОПРОБУЙ ЕЩЕ РАЗ! :-)" << endl;
    }

}

