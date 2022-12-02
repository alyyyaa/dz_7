//3. Напишите программу-телеграф, которая принимает от пользователя сообщение и выводит его на экран в виде последовательности точек и тире. 
//Азбука Морзе для букв русского алфавита приведена ниже.
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case ' ': cout << " "; break;
		case 'А': case 'а': cout << ".-"; break;
		case 'Б': case 'б': cout << "-..."; break;
		case 'В': case 'в': cout << ".--"; break;
		case 'Г': case 'г': cout << "--."; break;
		case 'Д': case 'д': cout << "-.."; break;
		case 'Е': case 'е': cout << "."; break;
		case 'Ж': case 'ж': cout << "...-"; break;
		case 'З': case 'з': cout << "--.."; break;
		case 'И': case 'и': cout << ".."; break;
		case 'Й': case 'й': cout << ".---"; break;
		case 'К': case 'к': cout << "-.-"; break;
		case 'Л': case 'л': cout << ".-.."; break;
		case 'M': case 'м': cout << "--"; break;
		case 'Н': case 'н': cout << "-."; break;
		case 'О': case 'о': cout << "---"; break;
		case 'П': case 'п': cout << ".--."; break;
		case 'Р': case 'р': cout << ".-."; break;
		case 'С': case 'с': cout << "..."; break;
		case 'Т': case 'т': cout << "-"; break;
		case 'У': case 'у': cout << "..-"; break;
		case 'Ф': case 'ф': cout << "..-."; break;
		case 'Х': case 'х': cout << "...."; break;
		case 'Ц': case 'ц': cout << "-.-."; break;
		case 'Ч': case 'ч': cout << "---."; break;
		case 'Ш': case 'ш': cout << "----"; break;
		case 'Щ': case 'щ': cout << "--.-"; break;
		case 'Ъ': case 'ъ': cout << ".--.-."; break;
		case 'Ы': case 'ы': cout << "-.--"; break;
		case 'Ь': case 'ь': cout << "-..-"; break;
		case 'Э': case 'э': cout << "..-.."; break;
		case 'Ю': case 'ю': cout << "..--"; break;
		case 'Я': case 'я': cout << ".-."; break;
		default: cout << "ошибка";
		}
	}
}
