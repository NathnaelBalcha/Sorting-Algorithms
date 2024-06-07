#include <iostream>
using namespace std;
void SelectionSorting(int data[], int size) {
	int minIndex, arr_swap;
	for (int i = 0; i < size - 1; ++i) {
			minIndex = i;
			for (int j = i + 1; j < size; ++j) {
					if (data[j] < data[minIndex]) {
							minIndex = j;
						}
				}
			arr_swap = data[i];
			data[i] = data[minIndex];
			data[minIndex] = arr_swap;
		}
}
int main() {
	const int size = 5;
	int data[size], counter = 1;
	cout << "\t\t\tSelection Sort\n";
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
	SelectionSorting(data,size);
	cout<<"\n\n Your numbers After sorting: \n\t";
	for (int j=0; j<size; j++)
		{
			cout<<data[j]<<"  ";
		}
	cout <<"\n\n---------------------------------------------\n";
	return 0;
}

