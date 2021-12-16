#include "number_validator.h"

#include <iostream>
#include <algorithm>

std::string NumberValidator::validate(const std::string &testString)
{
    std::cout << "Checking if string contains numbers ...\n";

    bool containNumbers{false};
    std::for_each(testString.cbegin(), testString.cend(),
                  [&containNumbers](const char ch)
                  {
                      if (std::isdigit(ch))
                          containNumbers = true;
                  });
    if (!containNumbers)
    {
        return "Please enter a string with numbers ";
    }
    return BaseValidator::validate(testString);
}