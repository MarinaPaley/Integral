#pragma once
namespace miit::solver {
    /**
    * @brief Расчет интеграла методом трапеции.
    */
    class RiemannSumTrapezoid
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
    public:
        /**
         * @brief Создает экземпляр класса "RiemannSumTrapezoid"
         * @param start Левая граница определенного интеграла.
         * @param finish Правая граница определенного интеграла.
         * @param step Шаг численного расчета интеграла.
        */
        RiemannSumTrapezoid(const double start, const double finish, const double step);

        /**
         * @brief Расчет интеграла методом трапеции.
         * @return Численное знаение интеграла.
        */
        double GetIntegral() const;
    };
}

