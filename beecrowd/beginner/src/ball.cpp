#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

// atalhos úteis
#define fastio                                                                 \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
#define ll long long
#define PI 3.14159

int main() {
  fastio;

  double ray = 0;
  cin >> ray;

  double calc = (4.0 / 3.0) * PI * (ray * ray * ray);

  cout << "VOLUME = " << fixed << setprecision(3) << calc << endl;

  return 0;
}
