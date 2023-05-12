#pragma once
#include <functional>
#include "RiemannSumBase.h"

namespace miit::solver
{
    /**
    * @brief Расчет интеграла методом левых прямоугольников.
    */
    class RiemannSumTrapezoid : public RiemannSumBase
    {
    public:
        /**
        * @brief Расчет интеграла методом левых прямоугольников.
        * @return Численное знаение интеграла.
        * @param start Левая граница определенного интеграла.
        * @param finish Правая граница определенного интеграла.
        * @param step Шаг численного расчета интеграла.
        * @param function Функция, которую небходимо проинтегрировать.
        */
        double GetValue(
            const double start,
            const double finish,
            const double step,
            const std::function<double(const double)>& function) const override;

        RiemannSumTrapezoid() = default;
        ~RiemannSumTrapezoid() = default;
    };
}

