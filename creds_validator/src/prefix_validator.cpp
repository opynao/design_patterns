#include "prefix_validator.h"

std::string PrefixValidator::validate(const std::string &str)
{
    // spdlog::info("Checking if the prefix in email is valid...");
    spdlog::info(str);
    auto pos = str.find('@');

    if ((str.size() - pos) == 0)
        throw std::runtime_error("not valid string without prefix");

    return BaseValidator::validate(str);
}