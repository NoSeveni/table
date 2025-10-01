#include "Table.h"
#include <iostream>
using namespace std;


Table::Table() : capacity(1), size(0) {
    setlocale(LC_ALL, "Russian");
    exa = new Tables[capacity];
}

Table::Table(int initial_size) : capacity(initial_size), size(0) {
    setlocale(LC_ALL, "Russian");
    exa = new Tables[capacity];
}

int Table::Find(const string& name) const {
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < size; i++) {
        if (exa[i].name == name) {
            return exa[i].count; 
        }
    }
    return -1;
}

bool Table::delelem(const string& name) {
    int index = Find(name);
    if (index == -1) {
        return false;
    }

    for (int i = index; i < size - 1; i++) {
        exa[i] = exa[i + 1];
    }
    size--;
    return true;
}
void Table::printall() const {
    setlocale(LC_ALL, "RUS");
    cout << "Содержание Таблицы (" << size << " элементов):" << endl;
    cout << "----------------------------------" << endl;
    cout << "Слово\t\tКоличество" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << exa[i].name << "\t\t" << exa[i].count << endl;
    }
    cout << "----------------------------------" << endl;
}

void Table::addelem(string name, int count) {
    setlocale(LC_ALL, "Russian");
    int index = Find(name);
    if (index != -1) {
        exa[index].count += count;
    }
    else {
        if (size >= capacity) {
            capacity *= 2;
            Tables* new_exa = new Tables[capacity];
            for (int i = 0; i < size; i++) {
                new_exa[i] = exa[i];
            }
            delete[] exa;
            exa = new_exa;
        }
        exa[size++] = { name, count };
    }
}