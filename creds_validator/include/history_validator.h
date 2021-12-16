#pragma once
#include "base_validator.h"

#include <vector>
#include <algorithm>
#include <iostream>

class HistoryValidator : public BaseValidator
{
public:
    HistoryValidator(std::vector<std::string> historyItems)
        : historyItems(historyItems)
    {
    }

    std::string validate(const std::string &testString) override;

private:
    std::vector<std::string> historyItems;
};