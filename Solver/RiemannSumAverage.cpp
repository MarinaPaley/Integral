#include <stdexcept>
#include "RiemannSumAverage.h"

double miit::solver::RiemannSumAverage::GetValue(
    const double start,
    const double finish,
    const double step,
    const std::function<double(const double)>& function) const
{
    RiemannSumAverage::GetValue(start, finish, step, function);

    auto sum = 0.0;
    for (auto x = start; x <= finish; x += step)
    {
        const auto averageValue = function(x + step / 2);
        sum += averageValue * step;
    }

    return sum;
}
