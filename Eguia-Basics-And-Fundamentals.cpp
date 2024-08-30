// Basics and Fundamentals of C++ (Merging Array Elements - Eguia, Ross Simon)

#include <iostream>
using namespace std; 



int main () 
{
	const int maxSize = 10; 
	
	int arr1[maxSize], arr2[maxSize], merged[2 * maxSize]; 
	int size1 = 0, size2 = 0, mergedSize = 0; 
	
	//First Array
	cout << "Enter the elements of the first array (1-10 elements): \n"; 
		for (int i = 0; i < maxSize && cin >> arr1[i]; i++) {
			
			size1++; 
	}
		
	//Second Array
	cout << "\nEnter the elements of the second array (1-10 elements): \n"; 
		for (int i = 0; i < maxSize && cin >> arr2[i]; i++) {
			
			size2++; 
	}
	
	//Merging the arrays
    for (int i = 0; i < size1; i++) {
    	
        merged[mergedSize++] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
    	
        merged[mergedSize++] = arr2[i];
    }
    
    //Sorting the array in descending order
	for (int i = 1; i < mergedSize; i++) {
    
		int sort = merged[i];
    	int j = i - 1;

    	while (j >= 0 && merged[j] < sort) {
    	
        	merged[j + 1] = merged[j];
        	j--;
    	} 
    	
		merged[j + 1] = sort;
	}
	
	cout << "\n\nThe sorted array outputs the following numbers: \n\n";
    	for (int i = 0; i < mergedSize; i++) {
        	cout << merged[i] << " ";
    	}
    
	cout << endl;

}