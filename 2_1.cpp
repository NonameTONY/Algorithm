#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    int x, max = 0; /* O(1) */

    cout << "Введите размер массива: "; /* O(1) */
    cin >> x; /* O(1) */

    int *a = new int[x]; /* O(1) */

    for(int i = 0; i < x; i++){ /* O(x) */
        a[i] = rand() % 10 + 0;
    }

    for(int i = 0; i < x; i++){ /* O(x) */
        if(a[i] > max) max = a[i];
    }

    cout << "Max = " << max; /* O(1) */

    return 0;

} /* Временная сложность алгоритма = O(x) */
