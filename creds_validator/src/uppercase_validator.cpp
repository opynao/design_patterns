#include "uppercase_validator.h"

#include <iostream>
#include <algorithm>
#include <cctype>

std::string UpperCaseValidator::validate(const std::string &testString)
{
    std::cout << "Checking if string contains Uppercase letter ...\n";

    bool containUpperCaseLetters{false};
    std::for_each(testString.cbegin(), testString.cend(),
                  [&containUpperCaseLetters](const char ch)
                  {
                      if (std::isupper(ch))
                          containUpperCaseLetters = true;
                  });
    if (!containUpperCaseLetters)
    {
        return "Please enter a string with upperCase letters\n";
    }
    return BaseValidator::validate(testString);
}