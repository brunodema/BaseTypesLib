#include "RegexString.h"

namespace base_types
{
RegexString::RegexString(const std::string &str) : std::string(str)
{
    if (ContainsInvalidChar())
        throw std::invalid_argument("The provided string does not respect the regex rule provided.(" + *this + ")");
}
RegexString::RegexString(const char *charp) : std::string(charp)
{
    if (ContainsInvalidChar())
        throw std::invalid_argument("The provided string does not respect the regex rule provided.(" + *this + ")");
}
}; // namespace base_types