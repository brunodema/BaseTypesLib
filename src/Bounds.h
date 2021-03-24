#pragma once
#include <cstdlib>
#include <stdexcept>

namespace base_types
{
struct Bounds
{
    Bounds() = default;
    Bounds(std::size_t _lower_bound, std::size_t _upper_bound) : lb(_lower_bound), ub(_upper_bound)
    {
        if (lb > ub)
        {
            throw std::invalid_argument("The lower bound can not be bigger that then upper bound.");
        }
    }
    bool operator==(const Bounds &_other) const
    {
        return this->lb == _other.lb && this->ub == _other.ub;
    }

    std::size_t lb = 0;
    std::size_t ub = 0;
};
} // namespace base_types