#include "length_validator.h"

#include <iostream>

std::string LengthValidator::validate(const std::string &testString)
{
    std::cout << "Checking if length equals " << m_minLength << "...\n";

    if (static_cast<int>(testString.size()) < m_minLength)
    {
        return "Please enter a value longer than " + std::to_string(m_minLength);
    }

    return BaseValidator::validate(testString);
}
