#include "InsertSort.h"

InsertSort::InsertSort(int* arr, int num){
	_arr = arr;
	_num = num;
	_name = "InsertSort";
}

void InsertSort::sort(){
	for(int i=1; i<_num; ++i){
		int tmp = _arr[i];
		int j = 0;
		for(j=i-1; j>=0; --j){
			if(_arr[j]>tmp)
				_arr[j+1] = _arr[j];
			else
				break;
		}
		_arr[j+1] = tmp;
	}
}	

std::string InsertSort::getName(){
	return _name;
}
