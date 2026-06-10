#include <iostream>
#include <vector>
using namespace std;

bool comparar(const vector<int>& v1, const vector<int>& v2, int i) {
    if (i == v1.size()) {
        return true;
    }
    if (v1[i] != v2[i]) {
        return false;
    }
    return comparar(v1, v2, i + 1);
}

bool sonIguales(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    return comparar(v1, v2, 0);
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4};
    cout << "A y B iguales? " << (sonIguales(a, b) ? "Si" : "No") << endl;

    vector<int> c = {1, 2, 3};
    vector<int> d = {1, 2, 4};
    cout << "C y D iguales? " << (sonIguales(c, d) ? "Si" : "No") << endl;

    vector<int> e = {5, 6};
    vector<int> f = {5, 6, 7};
    cout << "E y F iguales? " << (sonIguales(e, f) ? "Si" : "No") << endl;

    vector<int> g = {10, 20, 30};
    vector<int> h = {10, 20, 30};
    cout << "G y H iguales? " << (sonIguales(g, h) ? "Si" : "No") << endl;

    return 0;
}