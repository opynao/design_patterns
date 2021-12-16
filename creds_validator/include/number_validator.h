#pragma once
#include "base_validator.h"

class NumberValidator : public BaseValidator
{
public:
    std::string validate(const std::string &testString) override;
};