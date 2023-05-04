#pragma once
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
public:
    /**
     * @brief Создает экземпляр класса "RiemannSumRight"
     * @param start Левая граница определенного интеграла.
     * @param finish Правая граница определенного интеграла.
     * @param step Шаг численного расчета интеграла.
    */
    RiemannSumRight(const double start, const double finish, const double step);

    /**
     * @brief Расчет интеграла методом правых прямоугольников.
     * @return Численное знаение интеграла.
    */
    double GetIntegral() const;
};

