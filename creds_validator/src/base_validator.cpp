#include "base_validator.h"

BaseValidator::spValidator BaseValidator::setNext(const spValidator &nextValidator)
{
    next = nextValidator;
    return nextValidator;
}

std::string BaseValidator::validate(const std::string &str)
{
    if (this->next)
        return this->next->validate(str);

    //spdlog::info("All checks passed");
}
