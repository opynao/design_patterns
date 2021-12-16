#pragma once
#include <string>
#include <memory>

class StringValidator
{
public:
    using spValidator = std::shared_ptr<StringValidator>;
    virtual ~StringValidator() = default;
    virtual spValidator setNext(const spValidator &) = 0;
    virtual std::string validate(const std::string &) = 0;
};
