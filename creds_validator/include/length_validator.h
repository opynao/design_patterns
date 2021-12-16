#pragma once
#include "base_validator.h"

class LengthValidator : public BaseValidator
{
public:
    LengthValidator(int minLength)
        : m_minLength(minLength)
    {
    }

    std::string validate(const std::string &testString) override;

private:
    int m_minLength;
};