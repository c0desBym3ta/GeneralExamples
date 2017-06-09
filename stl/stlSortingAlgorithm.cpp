#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int *A,N;
	do{
		cout << "Insert array dimension: ";
		cin >> N;
	}while(N<=0);
	cout << endl;
	
	A = new int[N];
	
	for(int i = 0; i < N; i++){
		cout << "Inser array elements A["<< i << "]: ";
		cin >> A[i];
	}	
	cout << "Unsorted Array: ";
	for (int i = 0; i<N; i++)
		cout <<"[" << A[i] << "]";
	cout << endl;

	sort(A, A + N);

	cout << "Sorted array: ";
	for(int i = 0; i < N; i++)
		cout <<"[" <<  A[i] << "]";
	cout << endl;
	cout << endl;

	return 0;
}
