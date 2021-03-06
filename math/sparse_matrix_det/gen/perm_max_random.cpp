#include <iostream>
#include "random.h"

using namespace std;

int main(int, char* argv[]) {


    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = gen.uniform(2800, 3000);
    vector<int> a = gen.perm<int>(n);
    vector<int> b = gen.perm<int>(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        c[i] = gen.uniform(1, 998244353 - 1);
    }

    printf("%d %d\n", n, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", a[i], b[i], c[i]);
    }
    return 0;
}
