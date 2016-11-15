#include <iostream>
using namespace std;

template <class T>
T my_sub(T* arr, int size, T start=0) {
	for (int i = 0; i < size; i++)
		start-=arr[i];
	return start;
}

int main() {
	int arr[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	cout << "result is " << my_sub(arr, 10, 10) << endl;
	cout << "result is " << my_sub(arr, 10) << endl;
	return 0;
}
