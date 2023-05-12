#include <stdexcept>
#include "RiemannSumTrapezoid.h"


double miit::solver::RiemannSumTrapezoid::GetValue(
    const double start,
    const double finish,
    const double step,
    const std::function<double(const double)>& function) const
{
    RiemannSumTrapezoid::GetValue(start, finish, step, function);

    auto sum = 0.0;
    for (auto x = start; x <= finish; x += step)
    {
        const auto leftValue = function(x);
        const auto rightValue = function(x + step);
        sum += (leftValue + rightValue) / 2 * step;
    }

    return sum;
}
