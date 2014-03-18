#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>

#include "InsertSort.h"


int main(int argc, char** argv){
	int num = 0;
	std::string name;
	if(argc<3){
		std::cout<<"argv[1]: sort name, argv[2]: num"<<std::endl;
		return -1;
	}
	else{
		num = atoi(argv[2]);
		name = argv[1];
	}

	int* arr = new int[num];
	for(int i=0; i<num; i++)
		arr[i] = rand()%num;
	
	std::cout<<"==>before sorting: \n";
	for(int i=0; i<num; i++)
		std::cout<<arr[i]<<", ";	

	InsertSort insertSort(arr, num);
	insertSort.sort();
	
	std::cout<<"\n==>after sorting: \n";
	for(int i=0; i<num; i++)
		std::cout<<arr[i]<<", ";

	return 0;
}	
	 
