#include <iostream>
#include <string>
#include "Table.h"


int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество элементов таблицы";
	int kl;
	cin >> kl;
	Table s(kl);
	string cos;
	int assa;
	for (int i = 0; i < kl; i++) {
		cout << "Введите слово-";
		cin >> cos;
		cout << "Сколько раз оно встретилось в тексте-";
		cin >> assa;
		s.addelem(cos, assa);
	}
	int a = 999; string c; string l;
	int j;
	while (a != 0) {
		cout << "1.создать таблицу" << endl;
		cout << "2.добавить элемент" << endl;
		cout << "3.удалить элемент" << endl;
		cout << "4.сколько раз встречалось слово в тексте" << endl;
		cout << "5.вывести таблицу" << endl;
		cout << "0.выход" << endl;
		cin >> a;
		switch (a)
		{
			/*	case(1):
					cout << "введите количество элесентов-";
					int n;
					cin >> n;
					table s(n);
					break;*/

		case(2):
			cout << "введите слово-";
			cin >> c;
			cout << "сколько раз оно встретилось в тексте-";
			int k;
			cin >> k;
			s.addelem(c, k);
			break;
		case(3):
			cout << "какое слово вы хотите удалить-";

			cin >> l;
			s.delelem(l);
			break;
		case(4):
			cout << "введите слово-";
			//string c;
			cin >> c;
			j = s.Find(c);
			cout << j << endl;
			break;
		case(5):
			s.printall();
			break;
		}
	}
}
