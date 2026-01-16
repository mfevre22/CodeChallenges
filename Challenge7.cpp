/*
Count the numbers

Write a function that accepts an array of integers and returns the number of times a specific
digit appears in any of its numbers.
Test cases
assert(count("5", in: [5, 15, 55, 515]) == 6)
assert(count("1", in: [5, 15, 55, 515]) == 2)
assert(count("5", in: [55555]) == 5)
assert(count("1", in: [55555]) == 0)
*/
#include <assert.h>
#include <string>
#include <vector>
#include <iostream>

int count(const std::string& digit, const std::vector<int>& numbersList)
{
    std::string numberAsString;
    int count = 0;

    for (const int number : numbersList)
    {
        numberAsString = std::to_string(number);
        
        for (const char c : numberAsString)
        {
             count += static_cast<bool>(digit[0] == c);
        }
       
    }
    return count;
}

int main()
{
    assert(count("5", {5, 15, 55, 515}) == 6);
    assert(count("1", {5, 15, 55, 515}) == 2);
    assert(count("5", {55555}) == 5);
    assert(count("1", {55555}) == 0);
    std::cout << "All Cases Passed!\n";
}


