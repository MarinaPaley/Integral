#include <stdexcept>
#include "RiemannSumLeft.h"

double miit::solver::RiemannSumLeft::GetValue(

    const double start,
    const double finish,
    const double step,
    const std::function<double(const double)>& function) const
{
    RiemannSumBase::GetValue(start, finish, step, function);
    auto sum = 0.0;
    for (auto x = start; x <= finish; x += step)
    {
        const auto leftValue = function(x);
        sum += leftValue * step;
    }

    return sum;
}
