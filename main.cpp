#include <iostream>
#include <random>
#include <unordered_map>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    std::srand(time(nullptr));

    int listsize;
    int moh;

    cout << "-enter the size of your list :  " << endl;
    cin >> listsize;

    vector<int> vec(listsize);
    unordered_map<int, int> map;

    for (int i = 0; i < listsize; i++) {
        vec[i] = 0 + rand() % 100;
        map[vec[i]]++;
    }

    cout << "the generated numbers are :  ";
    for (int n : vec) {
        cout << n << " ";
    }
    cout << endl;

    char showRepetitions;
    cout << "Do you want to show the repetitions? (y/n): ";
    cin >> showRepetitions;

    if (showRepetitions == 'y' || showRepetitions == 'Y') {
        cout << "each number is repeated : " << endl;
        for (const auto& n : map) {
            cout << "number " << n.first << " is repeated : " << n.second << " times " << endl;
        }
    } else {
        return 0;
    }


}