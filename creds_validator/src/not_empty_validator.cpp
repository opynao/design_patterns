#include "not_empty_validator.h"

#include <iostream>

std::string NotEmptyValidator::validate(const std::string &str)
{
    //spdlog::info("Checking if empty...");

    if (str.empty())
        throw std::runtime_error("input string is empty");

    return BaseValidator::validate(str);
}
