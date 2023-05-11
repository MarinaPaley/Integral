#include <stdexcept>
#include "RiemannSumTrapezoid.h"

miit::solver::RiemannSumTrapezoid::RiemannSumTrapezoid(
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

double miit::solver::RiemannSumTrapezoid::GetValue() const
{
    auto sum = 0.0;
    for (auto x = this->start; x <= this->finish; x += this->step)
    {
        const auto leftValue = this->function(x);
        const auto rightValue = this->function(x + this->step);
        sum += (leftValue + rightValue) / 2 * this->step;
    }

    return sum;
}
