#include "nath_helper.h"

bool miit::math::are_equal(const double lha, const double rha, const double eps)
{
    return std::abs(lha - rha) <= eps;
}
