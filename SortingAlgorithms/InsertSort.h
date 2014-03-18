#include <vector>
#include <string>
#include <iostream>

/*	InsertSort:
 *		pick one element from beginning and insert it into the right place;
 * 		if insert it from the back of the ordered elements, this will greatly improve performance.
 *
 *
 */




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

