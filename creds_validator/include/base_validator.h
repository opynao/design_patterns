#pragma once
#include "string_validator.h"
#include "spdlog/spdlog.h"

class BaseValidator : public StringValidator
{
public:
    using spValidator = std::shared_ptr<StringValidator>;

    spValidator setNext(const spValidator &) override;

    std::string validate(const std::string &) override;

protected:
    spValidator next = nullptr;
};
