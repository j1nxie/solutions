#include <iostream>
#include <string>

using namespace std;

int main() {
   int n;
   string s;

   cin >> n;

   for (int i = 0; i < n; i++) {
       cin >> s;
       if (s.length() > 10) {
           cout << s.front() << s.length() - 2 << s.back() << "\n";
       } else {
           cout << s << "\n";
       }
   }
   return 0;
}
