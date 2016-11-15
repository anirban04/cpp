#include <iostream>
using namespace std;

template <class T>
inline T my_sum(T* arr, int size, T sum=0) {
  	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int main() {
	double arr[10] = {1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1};
	cout << "Sum = " << my_sum(arr, 10.0) << endl;
	cout << "Sum = " << my_sum(arr, 10.0, 20.1) << endl;
}

