/**
 * Examples of automatic tests for the exercise on binary trees.
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 */

#include <iostream>
using std::cout, std::endl;
#include "badkan.hpp"
#include "Tree.hpp"

int main() {
  ariel::Tree emptytree;
  ariel::Tree threetree;
  threetree.insert(5);
  threetree.insert(7);
  threetree.insert(3);

  ariel::Tree mytree1;
  ariel::Tree mytree2;

  badkan::TestCase tc("Binary tree");
  tc
  .CHECK_EQUAL (emptytree.size(), 0)
  .CHECK_OK    (emptytree.insert(5))
  .CHECK_EQUAL (emptytree.size(), 1)
  .CHECK_EQUAL (emptytree.contains(5), true)
  .CHECK_OK    (emptytree.remove(5))
  .CHECK_EQUAL (emptytree.contains(5), false)
  .CHECK_THROWS(emptytree.remove(5))
  .CHECK_EQUAL (emptytree.size() ,0)

  .CHECK_EQUAL (threetree.size(), 3)
  .CHECK_EQUAL (threetree.root(), 5)
  .CHECK_EQUAL (threetree.parent(3), 5)
  .CHECK_EQUAL (threetree.parent(7), 5)
  .CHECK_EQUAL (threetree.left(5), 3)
  .CHECK_EQUAL (threetree.right(5), 7)
  .CHECK_THROWS(threetree.insert(3))
  .CHECK_THROWS(threetree.left(6))
  .CHECK_OK    (threetree.print())



  .CHECK_OK    (mytree1.insert(23))
.CHECK_OK    (mytree1.insert(25))
.CHECK_OK    (mytree1.insert(2))
.CHECK_OK    (mytree1.insert(10))
.CHECK_OK    (mytree1.insert(1))
.CHECK_EQUAL (mytree1.size(), 4)
.CHECK_EQUAL (mytree1.size(), 5)
.CHECK_THROWS(mytree1.parent(23))
.CHECK_THROWS(mytree1.left(1))
.CHECK_THROWS(mytree1.right(25))
.CHECK_THROWS(mytree1.insert(22))
.CHECK_EQUAL (mytree1.contains(12), false)
.CHECK_THROWS(mytree1.remove(7))
.CHECK_OK    (mytree1.remove(10))
.CHECK_THROWS(mytree1.remove(10))
.CHECK_EQUAL (mytree1.size(), 4)
.CHECK_OK    (mytree1.remove(23))
.CHECK_EQUAL (mytree1.root(), 10)

.CHECK_THROWS(mytree2.print())
.CHECK_THROWS(mytree2.root())

  .print();

  cout << "You have " << tc.right() << " right answers and " << tc.wrong() << " wrong answers so your grade is " << tc.grade() << ". Great!" << endl;
}
