#pragma once
#include "base_validator.h"

class NotEmptyValidator : public BaseValidator
{
public:
    std::string validate(const std::string &) override;
};
