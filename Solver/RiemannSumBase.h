#pragma once
#include <functional>

namespace miit::solver
{
    /**
   * @brief Базовый метод расчета интеграла.
   */
    class RiemannSumBase
    {
    protected:
        RiemannSumBase() = default;

    public:
        virtual ~RiemannSumBase() = 0;

        /**
        * @brief Расчет интеграла.
        * @returns Численное знаение интеграла.
        * @param start Левая граница определенного интеграла.
        * @param finish Правая граница определенного интеграла.
        * @param step Шаг численного расчета интеграла.
        * @param function Функция, которую небходимо проинтегрировать.
       */
        virtual double GetValue(
            const double start,
            const double finish,
            const double step,
            const std::function<double(const double)>& function ) const;
    };
}

