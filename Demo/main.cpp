#include <iostream>
#include <stdexcept>
#include <vector>

#include "../Solver/RiemannSumAverage.h"
#include "../Solver/RiemannSumLeft.h"
#include "../Solver/RiemannSumRight.h"
#include "../Solver/RiemannSumTrapezoid.h"

using namespace miit::solver;

/**
 * @brief Точка входа в программу.
 * @return Код \c 0 в случае успеха.
*/
int main()
{
    setlocale(LC_ALL, "RUS");
    try
    {
        auto function = [](const double x) {return x * x; };
        auto left = 0.0;
        auto right = 1.0;
        auto step = 0.0001;
        auto leftSum = new RiemannSumLeft{};
        auto rightSum = new RiemannSumRight{};
        auto averageSum = new RiemannSumAverage{};
        auto trapezoidSum = new RiemannSumTrapezoid{};
        auto integral = 1.0 / 3;

        std::cout << "Значения интегралов, посчитанные методом"
            << " \n - Левых прямоугольников = " << leftSum->GetValue(left, right, step, function)
            << " \n - Правых = " << rightSum->GetValue(left, right, step, function)
            << " \n - Средних = " << averageSum->GetValue(left, right, step, function)
            << " \n - Трапецией = " << trapezoidSum->GetValue(left, right, step, function)
            << " \n - Точно = " << integral
            << std::endl;

        std::vector<RiemannSumBase*> base;
        base.push_back(leftSum);
        base.push_back(rightSum);
        base.push_back(averageSum);
        base.push_back(trapezoidSum);
        
        for (auto& sum : base)
        {
            std::cout << sum->GetValue(left, right, step, function) << std::endl;
        }
    }
    catch(std::logic_error& ex)
    {
        std::cerr << ex.what() << std::endl;;
    }
    return 0;
}
