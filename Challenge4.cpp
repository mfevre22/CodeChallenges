/*
Is a string a palindrome?

Write a function that accepts a String as its only parameter, and returns true if the string reads
the same when reversed, ignoring case.
Note: Many people have reported this question being stated as using integer input instead, but
that's only a minor variation.

Test cases
assert(isPalindrome(string: "rotator"))
assert(isPalindrome(string: "Rats live on no evil star"))
assert(isPalindrome(string: "Never odd or even") == false)
assert(isPalindrome(string: "Hello, world") == false)
*/

#include <iostream>
#include <assert.h>
#include <string>
#include <algorithm>

std::string toLower(const std::string& str)
{
    std::string lower;
    for (const char c : str)
    {
        lower.push_back(std::tolower(c));
    }
    return lower;
}

bool isPalindrome(const std::string& str)
{
    if (str.size() <= 1)
    {
        return true;
    }
    std::string lowerStr = toLower(str);
    std::string::iterator leftIt = lowerStr.begin();
    std::string::iterator rightIt = lowerStr.end() - 1;

    while (leftIt < rightIt)
    {
        if (*leftIt != *rightIt)
        {
            return false;
        }
        leftIt++;
        rightIt--;
    }
    return true;
}

int main()
{
    assert(isPalindrome("rotator"));
    assert(isPalindrome("Rats live on no evil star"));
    assert(isPalindrome("Never odd or even") == false);
    assert(isPalindrome("Hello, world") == false);
    std::cout << "All cases passed!\n";
    return 0;
}