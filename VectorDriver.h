// VectorDriver.cpp
// Thomas Wise
// Lab04
// 15 Oct 2018

/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

void add_numbers(vector<short>& data)
{
	for (int i = 0; i < 10; i++)
	{			
		data.push_back(rand() % 100);	// Puts Pseudorandom numbers in vector
	}
}

// This is literally the exact same as print, but I changed the for loop to only do
// every other index.
void print_even(const vector<short>& data)
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i < data.size(); i += 2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// Very Strongly based on add_numbers, just modified to look for
// a specific value.
bool is_present(const vector<short>& data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();

	while (iter != data.end()) {
		if (*iter == value)
		{
			return true;
		}
		iter++;
	}

	return false;
}
// TODO: implement add_numbers
// TODO: implement print_even
// TODO: implement is_present
// TODO: implement std::sort function