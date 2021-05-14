#include <iostream>
using namespace std;

int main() {
int N, D, A;
 cin >> N;
 cin >> D;
 cin >> A;

 if(A < D){
   cout << (D-A);
 }else if (D < A){
   cout << ((N-A)+D);
 }else{
   cout << 0;
 }
}