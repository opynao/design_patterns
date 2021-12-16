#include "history_validator.h"

bool in_vector(const std::string &value, const std::vector<std::string> &v)
{
    return std::find(v.begin(), v.end(), value) != v.end();
}

std::string HistoryValidator::validate(const std::string &testString)
{
    std::cout << "Checking if string is in history...\n";

    if (in_vector(testString, historyItems))
        return "Please enter a value that you haven't entered before";

    return BaseValidator::validate(testString);
}