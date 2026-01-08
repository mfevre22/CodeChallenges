/*
Needles in a haystack
Write a function that accepts two strings, a needle string and a haystack string. The function
should return how often characters from the needle string occur in the haystack string. Each
character will appear only once in the needle string, and your check should be case-sensitive.

Test cases
*/
#include <assert.h>
#include <iostream>
#include <string>
#include <map>

uint32_t count(const std::string& needle, const std::string& haystack)
{
    std::map<char, uint32_t> haystackLetterCounts;
    for (const char c : haystack)
    {
        if (haystackLetterCounts.count(c) == 0U)
        {
            haystackLetterCounts.insert({c, 1});
        }
        else
        {
            haystackLetterCounts[c]++;
        }
    }

    uint32_t count = 0;
    for (const char c : needle)
    {
        count += haystackLetterCounts[c];
    }
    
    return count;
}


int main()
{
    assert(count("Aa", "ABACA") == 3);
    assert(count("abc", "abcabc") == 6);
    assert(count("a", "AAA") == 0);
    std::cout << "All cases passed!\n";
    return EXIT_SUCCESS;
}

 