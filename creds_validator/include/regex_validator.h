#pragma once
#include "base_validator.h"

class RegexValidator : public BaseValidator
{
public:
    RegexValidator(const std::string &patternName, const std::string &regexString)
        : m_patternName(patternName), m_regexString(regexString)
    {
    }

    std::string validate(const std::string &testString) override;

private:
    std::string m_patternName;
    std::string m_regexString;
};
