#pragma once
#include <functional>

namespace miit::solver
{
    /**
    * @brief Расчет интеграла методом правых прямоугольников.
    */
    class RiemannSumRight
    {
    private:
        /**
         * @brief Левая граница определенного интеграла.
        */
        double start;

        /**
         * @brief Правая граница определенного интеграла.
        */
        double finish;

        /**
         * @brief Шаг численного расчета интеграла.
        */
        double step;

        /**
         * @brief Функция, которую небходимо проинтегрировать.
        */
        std::function<double(const double)> function;

    public:
        /**
         * @brief Создает экземпляр класса "RiemannSumRight"
         * @param start Левая граница определенного интеграла.
         * @param finish Правая граница определенного интеграла.
         * @param step Шаг численного расчета интеграла.
         * @param function Функция, которую небходимо проинтегрировать.
        */
        RiemannSumRight(
            const double start,
            const double finish,
            const double step,
            const std::function<double(const double)>& function);

        /**
         * @brief Расчет интеграла методом правых прямоугольников.
         * @return Численное знаение интеграла.
        */
        double GetValue() const;
    };
}

