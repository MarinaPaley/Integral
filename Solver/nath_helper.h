#pragma once

#include<cmath>
#include<limits>

namespace miit::math
{
    /**
     * @brief
     * @param lha
     * @param rha
     * @param eps
     * @return
    */
    bool are_equal(
        const double lha,
        const double rha,
        const double eps = std::numeric_limits<double>::epsilon());
}
