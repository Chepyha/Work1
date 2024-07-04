// Work1.cpp: определяет точку входа для приложения.
//

#include "Work1.h"

using namespace std;

void tokenize(const std::string& str, std::vector<std::string>& tokens, const std::string& delimiters = " ") // функция для разделения строки на подстроки разделения через пробел
{
    std::string::size_type lastPos = str.find_first_not_of(delimiters, 0);
    std::string::size_type pos = str.find_first_of(delimiters, lastPos);
    while (std::string::npos != pos || std::string::npos != lastPos)
    {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = str.find_first_not_of(delimiters, pos);
        pos = str.find_first_of(delimiters, lastPos);
    }
}




int main()
{
    setlocale(LC_ALL, "RUS");

    std::string str;
    std::vector<std::string> string;
    std::cout << "Введите тип транспорта:\n";
    getline(std::cin, str); // получаем строку с пробелами
    tokenize(str, string);
    int n(-1);
    for (int k = 0; k < string.size(); k++)
    {
        n = std::stoi(string[k]);

        //самый простой и рабочий вариант без использования классов
        switch (n)
        {
        case 0:
            std::cout << " Наименование транспорта: мотоцикл\n Кол-во колес: 2-3 \n Максимальная скорость: 200км/ч\n\n";
            break;
        case 1:
            std::cout << " Наименование транспорта: самокат\n Кол-во колес: 2 \n Максимальная скорость: 40км/ч\n\n";
            break;
        case 2:
            std::cout << " Наименование транспорта: автмобиль\n Кол-во колес: 4 \n Максимальная скорость: 150км/ч\n\n";
            break;
        case 3:
            std::cout << " Наименование транспорта: автобус\n Кол-во колес: 6 \n Максимальная скорость: 100км/ч \n Кол-во пассажиров: 20\n\n";
            break;
        default:
            std::cout << "Тип транспорта не определён\n";
            break;
        }
    }
    //просто точка остановки
    std::cin;

}