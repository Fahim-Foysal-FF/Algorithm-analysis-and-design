#include <bits/stdc++.h>
using namespace std;

/*INSERTIONSORT(A)
for i=2 to A.length
    key=A[i]
//Insert A[i] into the sorted sequence A(1,...,i-1)
j=i-1  */
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
   /*while j>0 and A[j]>key
   A[j+1]=A[j]
   j=j-1
   A[j+1]=key */
      while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter how many number to be sorted: ";
    cin >> size;

   int arr[size];


    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {

        cin >> arr[i];
    }

    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    printArray(arr, N);

    return 0;
}
