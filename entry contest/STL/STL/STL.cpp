#include <iostream>
#include <vector>
#include <list>

using namespace std;

ostream &operator<<(ostream &ostr, const list <int> &list) {
    for (const int i : list) {
        ostr << ' ' << i;
    }

    return ostr;
}

int main() {
    int vSize, lSize;

    cout << "Enter vector size:" << '\n';
    cin >> vSize;
    vector <int> v(vSize);
    cout << "Enter vector:" << '\n';
    for (int i = 0; i < vSize; ++i) {
        cin >> v[i];
    }

    cout << "Enter list size:" << '\n';
    cin >> lSize;
    list <int> l;
    cout << "Enter list:" << '\n';
    for (int i = 0; i < lSize; ++i) {
        int input;
        cin >> input;
        l.emplace_back(input);
    }

    list <int> tmp;
    for (auto n : v) {
        tmp.emplace_back(n);
    }

    l.merge(tmp);
    l.unique();
    cout << "Merged:" << l << '\n';

    return 0;
}