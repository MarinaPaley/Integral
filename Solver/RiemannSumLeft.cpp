#include <stdexcept>
#include "RiemannSumLeft.h"

miit::solver::RiemannSumLeft::RiemannSumLeft(
    const double start,
    const double finish,
    const double step,
    const std::function<double(const double)>& function)
    :start(start), finish(finish), step(step), function(function)
{
    if (start >= finish)
    {
        throw std::logic_error("Правая граница интегрирования должна быть больше левой!");
    }

    if (step <= 0)
    {
        throw std::logic_error("Шаг интегрирования должен быть строго положительным!");
    }
}

double miit::solver::RiemannSumLeft::GetValue() const
{
    auto sum = 0.0;
    for (auto x = this->start; x <= this->finish; x += this->step)
    {
        const auto leftValue = this->function(x);
        sum += leftValue * this->step;
    }

    return sum;
}
