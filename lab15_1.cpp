#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
  T temp ;
  int j;
  for (int i = 1; i < N; i++) {
    temp = d[i];
	j = i -1;
	while(d[j] < temp and  j >= 0)
	{
		d[j+1] = d[j];
		j--;
	}
	d[j+1] = u;
	cout << "Pass " << i <<":" ;
		for(int n = 0; n < N; n++) cout << d[n] << " ";
		cout << endl;

  }
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

