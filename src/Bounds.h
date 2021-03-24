#pragma once
#include <cstdlib>
#include <stdexcept>

namespace base_types
{
struct Bounds
{
    Bounds() = default;
    Bounds(std::size_t lower_bound, std::size_t upper_bound) : lb(lower_bound), ub(upper_bound)
    {
        if (lb > ub)
        {
            throw std::invalid_argument("The lower bound can not be bigger that then upper bound.");
        }
    }

    std::size_t lb = 0;
    std::size_t ub = 0;
};
} // namespace base_types