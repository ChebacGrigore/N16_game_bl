#include <iostream>
#include <vector>

using namespace std;

int main() {

    int bl, I, r;

    int p;
    cin >> p >> bl;

    vector<int> a(p + 1);

    for (int i = 1; i <= p ; ++i) {
        a[i] = i;
    }

    int k1;

    for (int i = 1; i <= bl; ++i) {

        cin >> I >> r;
        while (I <= r) {
            k1 = I;
            if(a[k1] == I) {
                a[k1] = -1;
            }
            I++;
        }
    }

    for (int i = 1; i <= p; ++i) {
      if(a[i] == -1)
          cout << ".";
      else
          cout << "I";
    }

    return 0;
}
