#include <iostream>
using namespace std;

template <class T>
inline void my_swap(T& i, T& j) {
	T temp = i;
	i = j;
	j = temp;
}

int main() {
	double x = 5.2;
	double y = 10.4;
	cout << "before swap x = " << x << " y = " << y << endl;
	my_swap(x, y);
	cout << "after swap x = " << x << " y = " << y << endl;
}

