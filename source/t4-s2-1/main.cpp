#include <iostream>

using namespace std;

int main() {
   cout << "----- t4-s2-1 -----\n" << endl;

   // c.
   int x;
   cin >> x;

   int y = 0;

   for (int i = 9; i >= 0; i--) {
      int cx = x;

      while (cx > 0) {
         if (cx % 10 == i) {
            y = y * 10 + i;
         }
         cx /= 10;
      }
   }

   cout << y << endl;

   /*
   a.
      ####
      x: 7172
      i: 9
      cx: 7172 -> 717 -> 71 -> 7 -> 0
      y: 0
      ####

      ####
      x: 7172
      i: 8
      cx: 7172 -> 717 -> 71 -> 7 -> 0
      y: 0
      ####

      ####
      x: 7172
      i: 7
      cx: 7172 -> 717 -> 71 -> 7 -> 0
      y: 77
      ####

      ####
      x: 7172
      i: 6 .. 5 .. 4 .. 3
      cx: 7172 -> 717 -> 71 -> 7 -> 0
      y: 77
      ####

      ####
      x: 7172
      i: 2
      cx: 7172 -> 717 -> 71 -> 7 -> 0
      y: 772
      ####

      ####
      x: 7172
      i: 1
      cx: 7172 -> 717 -> 71 -> 7 -> 0
      y: 7721
      ####

   raspuns: 7721

   -- b. 2334, 4233 (orice numar format cu cifrele 4,3,3,2)

   -- d.

   int i = 9;
   while (i >= 0) {
      int cx = x;

      while (cx > 0) {
         if (cx % 10 == i) {
            y = y * 10 + i;
         }
         cx /= 10;
      }
      i--;
   }
   */

   cout << "\n----- END -----" << endl;
}
