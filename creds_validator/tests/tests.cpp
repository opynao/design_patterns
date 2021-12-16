#include "base_validator.h"
#include "not_empty_validator.h"
#include "prefix_validator.h"
#include "length_validator.h"

#include "gtest/gtest.h"

TEST(EmptyString, Test)
{
    auto emailValidator = std::make_shared<BaseValidator>();

    emailValidator->setNext(std::make_shared<NotEmptyValidator>());

    EXPECT_THROW(emailValidator->validate(""), std::runtime_error);
}

TEST(EmailWithoutPrefix, Test)
{
    // auto emailValidator = std::make_shared<BaseValidator>();

    // // emailValidator->setNext(std::make_shared<NotEmptyValidator>());
    // emailValidator->setNext(std::make_shared<PrefixValidator>());
    // // emailValidator->validate("@gmail.com");
    // EXPECT_THROW(emailValidator->validate("@gmail.com"), std::runtime_error);

    auto emailValidator = std::make_shared<BaseValidator>();

    emailValidator->setNext(std::make_shared<NotEmptyValidator>())
        //->setNext(std::make_shared<PrefixValidator>());
        ->setNext(std::make_shared<LengthValidator>(5));
    emailValidator->validate("s@gmail.com");
    // EXPECT_THROW(emailValidator->validate("s@gmail.com"), std::runtime_error);
}