#pragma once
#include "base_validator.h"

#include <iostream>
#include <algorithm>
#include <cctype>

class UpperCaseValidator : public BaseValidator
{
public:
    std::string validate(const std::string &testString) override;
};