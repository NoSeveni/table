#pragma once
#include <string>
using namespace std;


class Table {
private:
	struct Tables {
		string name;
		int count;
	};
	Tables* exa;          
	size_t capacity;      
	size_t size;
public:
	Table();
	Table(int size);
	bool delelem(const string& name);
	void addelem(string name, int id);
	void printall()const;
	int Find(const string& name) const;
};