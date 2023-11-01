#include <iostream>
using namespace std;


void generateRandomr(int r[], int k, int minValue, int maxValue) {
    for (int i = 0; i < k; ++i) {
        r[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
}

void printArray(const int r[], int k) {
    for (int i = 0; i < k; ++i) {
        cout << r[i] << ' ';
    }
    cout << endl;
}

int countElements(int r[], int k ) {
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (r[i] % 6 == 0 || i % 5 != 0) {
            count++;
        }
    }
    return count;
}

int sumElements(int r[], int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (r[i] % 6 == 0 || i % 5 != 0) {
            sum += r[i];
        }
    }
    return sum;
}
void replaceElements(int r[], int k) {
    for (int i = 0; i < k; i++) {
        if (r[i] % 6 == 0 || i % 5 != 0) { 
            r[i]=0;
        }
    }
}

int main() {
    srand(time(0));
    const int k = 25;
    int r[k];

    int minValue = 4;
    int maxValue = 73;
    generateRandomr(r, k, minValue, maxValue);
    int count = 0, sum = 0;
    printArray(r, k);
    count=countElements(r, k);
    sum=sumElements(r, k);
    replaceElements(r, k);
    cout << "Amount= " << count << endl;
    cout << "Sum= " << sum << endl;
    cout << "Changed array=";
    printArray(r, k);

    return 0;
}
