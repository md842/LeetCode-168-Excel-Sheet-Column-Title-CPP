/*
 * 168. Excel Sheet Column Title
    https://leetcode.com/problems/excel-sheet-column-title/.

 * Given an integer columnNumber, return its corresponding column title as it
    appears in an Excel sheet.
 
 * Constraints:
 *  1 <= columnNumber <= 2^31 - 1
 */

#include <iostream>
#include <iomanip> // This is used by test(), not the main algorithm
#include <string> // This is used by test(), not the main algorithm

using std::string;
using std::cout; // This is used by test(), not the main algorithm
using std::endl; // This is used by test(), not the main algorithm

string convertToTitle(int columnNumber) {
  if (columnNumber == 0) // Base case: nothing left to process.
    return "";
  /* Decrement columnNumber since each place isn't a multiple of 26, but also
   * contains values from the previous place */
  columnNumber--;
  // Recursive call: previous place's value before this place's value
  return convertToTitle(columnNumber / 26) + char('A' + columnNumber % 26);
}

void test(int columnNumber, string exp){
  string testCase = "columnNumber: " + std::to_string(columnNumber);

  string output = convertToTitle(columnNumber);
  string details = "Expected " + exp + ", got " + output;

  std::string status = "";
  if (exp == output)
    status = "OK";
  else
    status = "Error";

  cout << std::setw(90) << testCase << std::setw(11) << status << std::setw(45)
  << details << endl;
}

int main(){
  // Test cases
  cout << endl << std::setw(90) << "Test case" << std::setw(11) << "Status";
  cout << std::setw(45) << "Details" << endl;
  cout << std::string(146, '-') << endl;

  test(1, "A");
  test(26, "Z");
  test(27, "AA");
  test(702, "ZZ");
  test(703, "AAA");
  test(321272406, "ZZZZZZ");
  test(321272407, "AAAAAAA");
  test(2147483647, "FXSHRXW");

  return 0;
}
