#include <iostream>
#include <cstring>

using namespace std;

int main() {

  int n, b, p;
  cin >> n;
  int v[1000005];

  memset(v,0,sizeof v);
  for (int i = 0; i<n; i++)
  {
    cin >> b; 
    v[b] = 1; 
  }
  p = 0;
  for(int i = 0; i< 1000005; i++)
  {
    p += v[i];
  }
  cout << p << "\n";
}
   