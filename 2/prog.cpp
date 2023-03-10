#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    int x, sum = 0; /* O(1) */

    cout << "Введите размер массива: "; /* O(1) */
    cin >> x; /* O(1) */

    int *a = new int[x]; /* O(1) */

    for(int i = 0; i < x; i++){ /* O(x) */
        a[i] = rand() % 10 + 0;
    }

    for(int i = 0; i < x; i++){ /* O(x^2) */
        if(a[i] < 0) sum+= a[i];
    }

    if(sum == 0) cout << "Отрицательных чисел нет"; /* O(x) */
    else cout << "Сумма = " << sum; /* O(1) */

    return 0;

} /* Временная сложность алгоритма = O(x^2) */