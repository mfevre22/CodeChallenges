/*
Removing duplicate letters

Write a function that accepts a string as its input and returns the same string with duplicate
letters removed, so that each letter appears only once.
Tip: If you can solve this challenge without a for-in loop, you can consider it a Tricky
difficulty rather than Fun.

Test cases
assert(removeDuplicateCharacters(in: "wombat") == "wombat")
assert(removeDuplicateCharacters(in: "hello") == "helo")
assert(removeDuplicateCharacters(in: "Mississippi") == "Misp")
*/
#include <iostream>
#include <string>
#include <unordered_set>
#include <assert.h>

std::string removeDuplicateCharacters(const std::string& str)
{
    if (str.empty())
    {
        return str;
    }

    std::unordered_set<char> set;
    std::string newString;

    for (const char c : str)
    {
        if (set.insert(c).second)
        {
             newString += c;
        }
    }

    return newString;
}


int main()
{
    assert(removeDuplicateCharacters("wombat") == "wombat");
    assert(removeDuplicateCharacters("hello") == "helo");
    assert(removeDuplicateCharacters("Mississippi") == "Misp");
    std::cout << "All cases passed!\n";
    return 0;
}