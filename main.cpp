#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, x;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    cin >> n;
    if (0 == n) break;

    ll m = 0;
    ll j = 0;
    while (0 < (n--)) {
      cin >> x;
      if (0 == x) {
        ++m;
      } else {
        ++j;
      }
    }

    cout << "Mary won " << m << " times and John won " << j << " times\n";
  }

  return 0;
}