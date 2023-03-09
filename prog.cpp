#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Result(int x, int  arr[x]){
    int *res = new int[x];
    for(int i = 0; i < x; i++){
        if((arr[i] < 0) && (arr[i] % 2 == 0)){
            res[i] = arr[i];
        }
    }

    for(int i = 0; i < x; i++){
        if(res[i] != 0 ) cout << res[i] << " ";
    }
}

int main() {

    srand(time(NULL));
    int x;

    cout << "Длина массива: ";
    cin >> x;

    int *arr = new int[x];

    cout << "Исходный массив:" << endl;
    for(int i = 0; i < x; i++){
        arr[i] = rand() % 10 + -10;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Результат:" << endl;
    Result(x, arr);

    return 0;

}