#include <stdexcept>
#include "RiemannSumRight.h"

double miit::solver::RiemannSumRight::GetValue(

    const double start,
    const double finish,
    const double step,
    const std::function<double(const double)>& function) const
{
    RiemannSumBase::GetValue(start, finish, step, function);

    auto sum = 0.0;
    for (auto x = start; x <= finish; x += step)
    {
        const auto rightValue = function(x + step);
        sum += rightValue * step;
    }

    return sum;
}
