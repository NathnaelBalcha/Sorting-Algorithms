#include <iostream>
using namespace std;
void InsertionSort(int data[], int size) {
	for (int i = 1; i < size; ++i) {
			int arr_i = data[i], j;
			j = i - 1;
			while (j >= 0 && data[j] > arr_i) {
					data[j + 1] = data[j];
					j = j - 1;
				}
			data[j + 1] = arr_i;
		}
}
int main() {
	const int size = 5;
	int data[size], counter = 1;
	cout << "\t\t\tInsertion Sort\n";
	cout << "\t   Enter "<< size << " Elements to inseart into array\n";
	cout << "\t==========================================\n";
	for (int i = 0; i < size; ++i) {
			cout << " Enter elements " << counter << ": ";
			cin >> data[i];
			counter++;
		}
	cout <<"\n---------------------------------------------\n\n";
	cout<<" Your numbers before sorting: \n\t";
	for (int i=0; i<size; i++)
		{
			cout<<data[i]<<"  ";
		}
	InsertionSort(data,size);
	cout<<"\n\n Your numbers After sorting: \n\t";
	for (int j=0; j<size; j++)
		{
			cout<<data[j]<<"  ";
		}
	cout <<"\n\n---------------------------------------------\n";
	return 0;
}

