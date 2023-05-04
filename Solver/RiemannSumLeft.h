#pragma once
/**
* @brief Расчет интеграла методом левых прямоугольников.
*/
class RiemannSumLeft
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
     * @brief Создает экземпляр класса "RiemannSumLeft"
     * @param start Левая граница определенного интеграла.
     * @param finish Правая граница определенного интеграла.
     * @param step Шаг численного расчета интеграла.
    */
    RiemannSumLeft(const double start, const double finish, const double step);

    /**
     * @brief Расчет интеграла методом левых прямоугольников.
     * @return Численное знаение интеграла.
    */
    double GetIntegral() const;

};

