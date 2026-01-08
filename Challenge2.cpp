/*
Are the letter occurrences unique?
A common variation of the "Are the letters unique?" challenge is to check whether the letter
occurrences are unique: when you count all the occurrences of each letter, is each count
unique?
Test cases
assert(uniqueOccurrences(in: "ABBCCCDDDD"))
assert(uniqueOccurrences(in: "AABACCCABD"))
assert(uniqueOccurrences(in: "HELLO") == false)
assert(uniqueOccurrences(in: "HeLlO") == false)
*/

#include <iostream>
#include <assert.h>
#include <string>
#include <map>
#include <set>

bool uniqueOccurrences(const std::string& str)
{
   std::map<char, uint32_t> counts;
   for (const char c : str)
   {
      if (counts.count(c) == 0)
      {
         counts.insert({c, 1U});
      }
      else
      {
         counts[c]++;
      }
   }
   std::set<int32_t> set;
   for (const auto& pair : counts)
   {
      set.insert(pair.second);
   }
   return counts.size() == set.size();
}

int main(int argc, const char * argv[]) {
   assert(uniqueOccurrences("ABBCCCDDDD"));
   assert(uniqueOccurrences("AABACCCABD"));
   assert(!uniqueOccurrences("HELLO"));
   assert(!uniqueOccurrences("HeLlO"));
   std::cout << "All cases passed!\n";
   return EXIT_SUCCESS;
}
