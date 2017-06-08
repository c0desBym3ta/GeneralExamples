#include <iostream>
#include <string>
using namespace std;


//Generic template that handle the other data types.
template <class T>
class Daniel{
public:
	Daniel(T x);


protected:

};

template <class T>
Daniel<T>::Daniel(T x){
	cout << x << " is not a character." << endl;
}

//Template specialization that handles only characters!
template<>
class Daniel<char>{
public:
	Daniel(char x){
		cout << x << " is indeed a character!" << endl;
	}	


protected:

};


int main(){
	cout << "Test, OK!"<<endl;
	Daniel<int> obj1(7);
	Daniel<float> obj2(5.3);
	Daniel<char> obj3('Q');

	

	

	return 0;
}
