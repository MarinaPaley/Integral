#include "MathHelper.h"
#include <cmath>
#include <climits>

bool miit::math::MathHelper::AreEqual(const double lha, const double rha, const double precision)
{
    return std::abs(lha - rha) <= precision;
}

bool miit::math::MathHelper::AreEqual(const double lha, const double rha)
{
    return miit::math::MathHelper::AreEqual(lha, rha, std::numeric_limits<double>::epsilon());
}
