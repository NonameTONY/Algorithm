#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Reverse(int x, int  arr[x]){
    cout << "Результат:" << endl;
    x /= 2;
    for (int i = x-1; i > -1; i--) {
        cout << arr[i] << " ";
    }
    x *= 2;
    for (int i = x-1; i > x/2-1; i--) {
        cout << arr[i] << " ";
    }
}

int main() {

    srand(time(NULL));
    int x;

    cout << "Длина массива: ";
    cin >> x;

    if (x % 2 == 0) {
        int *arr = new int[x];

        cout << "Исходный массив:" << endl;
        for(int i = 0; i < x; i++){
            arr[i] = rand() % 10 + 0;
            cout << arr[i] << " ";
        }

        cout << endl;

        Reverse(x, arr);
            
        return 0;
    }
    else {
        cout << "В массиве нечетное число элементов!";
    }

}
