#include "regex_validator.h"

#include <regex>
#include <iostream>

std::string RegexValidator::validate(const std::string &testString)
{
    std::cout << "Checking if string is a valid " << m_patternName << "...\n";

    if (!std::regex_match(testString, std::regex(m_regexString)))
    {
        return "The value entered is not a valid " + m_patternName;
    }

    return BaseValidator::validate(testString);
}
