#include <iostream>

using namespace std;
template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

class Widget {
	Widget(const Widget& rhs);
	Widget& operator=(const Widget& rhs);
};
int main() {

}