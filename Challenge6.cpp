/*
Matching anagrams
Create a function that accepts two strings, and returns true if the first string is an anagram of
the second.
Tip: Anagrams are rearrangements of the letters in a string, making sure to use all and only the
original letters.

Test cases
assert(isAnagram("stone", for: "tones"))
assert(isAnagram("madam", for: "madam"))
assert(isAnagram("Madam", for: "madam") == false)
assert(isAnagram("hello", for: "world") == false)
*/
#include <assert.h>
#include <string>
#include <algorithm>
#include <iostream>

bool isAnagram(std::string str1, std::string str2)
{
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main()
{
    assert(isAnagram("stone", "tones"));
    assert(isAnagram("madam", "madam"));
    assert(isAnagram("Madam", "madam") == false);
    assert(isAnagram("hello", "world") == false);
    std::cout << "All tests passed!\n";
    return 0;
}