#include <iostream>
#include <string>
using namespace std;

template <class T> //Generic data type.
class Daniel{
	T first, second;
public:
	Daniel(T a, T b) : first(a), second(b) {}
	T bigger();
	T smaller();
	
};

template <class T>
T Daniel<T>::bigger(){ //Need to specify that is from the class.
	return (first>second?first:second);
}

template <class T>
T Daniel<T>::smaller(){
	return (first < second?first:second);
}

int main(){
	Daniel <int> dani(69,198);
	cout << "Bigger: " << dani.bigger() << endl;
	cout << "Smaller: " << dani.smaller() << endl;
	return 0;
}
