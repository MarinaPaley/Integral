#include <stdexcept>
#include "RiemannSumBase.h"

namespace miit::solver
{
    RiemannSumBase::RiemannSumBase()
    {
    }

    RiemannSumBase::~RiemannSumBase()
    {
    }

    double RiemannSumBase::GetValue(const double start, const double finish, const double step, const std::function<double(const double)>&function) const
    {
        if (start >= finish)
        {
            throw std::logic_error("Правая граница интегрирования должна быть больше левой!");
        }

        if (step <= 0)
        {
            throw std::logic_error("Шаг интегрирования должен быть строго положительным!");
        }
        return 0.0;
    }
}