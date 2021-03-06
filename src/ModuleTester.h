#pragma once
#include <cassert>
#include <exception>
#include <functional>
#include <iostream>
#include <vector>

#define ASSERT_THROW(STATEMENT, ExceptionType)                                                                         \
    try                                                                                                                \
    {                                                                                                                  \
        STATEMENT;                                                                                                     \
        throw;                                                                                                         \
    }                                                                                                                  \
    catch (const ExceptionType &e)                                                                                     \
    {                                                                                                                  \
    }
#define ASSERT_THROW_ALL(STATEMENT)                                                                                    \
    try                                                                                                                \
    {                                                                                                                  \
        STATEMENT;                                                                                                     \
        throw;                                                                                                         \
    }                                                                                                                  \
    catch (...)                                                                                                        \
    {                                                                                                                  \
    }

namespace base_types
{
class ModuleTester : std::vector<std::function<void()>>
{
  public:
    static std::vector<std::function<void()>> tests;

    static int Run();
};
} // namespace base_types
