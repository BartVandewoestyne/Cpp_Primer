/*
 * Problems:
 *
 *   1) See page 353:
 *
 *      "Iterators to a vector are invalid if the container was reallocated.
 *       If no reallocation happens, indirect references to elements before
 *       the insertion remain valid; those to elements after the insertion are
 *       invalid."
 *
 *      -> Since we are not sure if reallocation happens or not, we cannot be
 *         sure about the validity of the iterators anymore.
 *
 *   2) iter never gets updated, so we are stuck in an endless while-loop.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
  int some_val = 3;
  vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  auto iter = iv.begin();

  while (std::distance(iv.begin(), iter) < iv.size()/2)  // Fix: iterate until
  {                                                      // halfway the
      if (*iter == some_val) {                           // current vector.

          // Fix: the possible invalidation of iter can be solved by using
          // the return value of the insert call to make iter valid and usable
          // again.
          //iv.insert(iter, 2 * some_val);
          iter = iv.insert(iter, 2 * some_val);

      } else {
          ++iter;
      }
  }

  for (auto e : iv)
  {
    cout << e << endl;
  }
}
