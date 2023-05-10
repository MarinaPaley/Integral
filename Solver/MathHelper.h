#pragma once

namespace miit::math {
    class MathHelper
    {
     /**
    @brief Метод сравнени¤ двух вещественных чисел с заданной точностью.
    @param lha Первое число.
    @param rha Второе число.
    @param precision Точность сравнени¤.
    @return true, если \a lha и \a rha равны.
    */
        bool AreEqual(
            const double lha,
            const double rha,
            const double precision);

        /**
       @brief Метод сравнени¤ двух вещественных чисел с точностью по умолчанию.
       @param lha Первое число.
       @param rha Второе число.
       @return true, если \a lha и \a rha равны.
       */
        bool AreEqual(
            const double lha,
            const double rha);
    };
}