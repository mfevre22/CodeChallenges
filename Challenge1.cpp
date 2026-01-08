/*
Are the letters unique?
Write a function that accepts a String as its only parameter, and returns true if the string has
only unique letters, taking letter case into account.
 
Test cases
assert(lettersAreUnique(in: "No duplicates"))
assert(lettersAreUnique(in: "abcdefghijklmnopqrstuvwxyz"))
assert(lettersAreUnique(in: "AaBbCc"))
assert(lettersAreUnique(in: "Hello, world") == false)
*/

#include <iostream>
#include <string>
#include <set>
#include <assert.h>

bool lettersAreUnique(const std::string& str)
{
   std::set<char> letterSet;
   letterSet.insert(str.begin(), str.end());
   return str.size() == letterSet.size();
}

int main(int argc, const char * argv[]) {
  
   assert(lettersAreUnique(std::string("No duplicates")));
   assert(lettersAreUnique(std::string("abcdefghijklmnopqrstuvwxyz")));
   assert(lettersAreUnique(std::string("AaBbCc")));
   assert(!lettersAreUnique(std::string("Hello, world")));
   
   std::cout << "All cases passed!\n";
   return EXIT_SUCCESS;
}
