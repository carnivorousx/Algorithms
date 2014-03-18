#include <vector>
#include <string>
#include <iostream>

class InsertSort{
private:
	int* _arr;
	int _num;
	std::string _name;

public:
	void sort();
	InsertSort(int* arr, int num);
	std::string getName();
};

