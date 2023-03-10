#include <iostream>

using namespace std;

int main(){

    int x, SUM_OTR = 0, mark = 0;

    cout << "Введите размер массива: ";
    cin >> x; 

    int *arr = new int[x]; 

    for (int i = 0; i < x; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        if (arr[i] > 0) {
            mark = i;
        }
        if (arr[i] < 0) {
            SUM_OTR += arr[i];
        }
    }

    int* arr1 = new int[x];
    for (int i = 0; i <= mark-1; i++) {
        arr1[i] = arr[i];
     }

    int* arr2 = new int[x];
    for (int i = x; i >= mark; i--) {
        arr2[i] = arr[i];
    }

    cout << "Реузльтат: \n";

    for (int i = 0; i < mark; i++) {
        cout << arr1[i] << " ";
    }

    cout << SUM_OTR << " ";

    for (int i = mark; i < x; i++) {
        cout << arr2[i] << " ";
    }    

    return 0;

}
