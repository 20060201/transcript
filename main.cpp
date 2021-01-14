#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> number;

    int num = 1;
    while (num != 0) {
        cin >> num;
        number.push_back(num);
    }

    number.pop_back();

    sort(number.begin(), number.end());
    // for(auto n : number) {
    //     cout << n << " ";
    // }

    //cout << endl;

    reverse(number.begin(), number.end());
    // for (auto n : number) {
    //     cout << n << " ";
    // }

    //cout << endl;

    vector<int> number1(begin(number), end(number) - 2);
    vector<int> number2(begin(number) + number.size() / 2, end(number));

    int total, total1, total2 = 0;
    for (auto n : number) {
        total += n;
    }

    for (auto n : number1) {
        total1 += n;
    }

    for (auto n : number2) {
        total2 += n;
    }

    int average = total / number.size();
    int average1 = total1 / number1.size();
    int average2 = total2 / number2.size();

    cout << "平均 : " << average << endl;
    cout << "前半 : " << average1 << endl;
    cout << "後半 : " << average2 << endl;
}
