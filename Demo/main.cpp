#include <iostream>
#include <stdexcept>

#include "../Solver/RiemannSumAverage.h"
#include "../Solver/RiemannSumLeft.h"
#include "../Solver/RiemannSumRight.h"
#include "../Solver/RiemannSumTrapezoid.h"

using namespace miit::solver;

/**
 * @brief ����� ����� � ���������.
 * @return ��� \c 0 � ������ ������.
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
        auto leftSum = new RiemannSumLeft{ left, right, step, function };
        auto rigthSum = new RiemannSumRight{ left, right, step, function };
        auto averageSum = new RiemannSumAverage{ left, right, step, function };
        auto trapezoidSum = new RiemannSumTrapezoid{ left, right, step, function };

        auto integral = 1.0 / 3;

        std::cout << "�������� ����������, ����������� �������"
            << " \n - ����� ��������������� = " << leftSum->GetValue()
            << " \n - ������ = " << rigthSum->GetValue()
            << " \n - ������� = " << averageSum->GetValue()
            << " \n - ��������� = " << trapezoidSum->GetValue()
            << " \n - ����� = " << integral
            << std::endl;
    }
    catch(std::logic_error& ex)
    {
        std::cerr << ex.what() << std::endl;;
    }
    return 0;
}
