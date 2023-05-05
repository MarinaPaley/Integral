#pragma once
#include <functional>
namespace miit::solver
{
    /**
    * @brief ������ ��������� ������� ��������.
    */
    class RiemannSumTrapezoid
    {
    private:

        /**
         * @brief ����� ������� ������������� ���������.
        */
        double start;

        /**
         * @brief ������ ������� ������������� ���������.
        */
        double finish;

        /**
         * @brief ��� ���������� ������� ���������.
        */
        double step;

        /**
         * @brief �������, ������� ��������� ����������������.
        */
        std::function<double(const double)> function;

    public:
        /**
         * @brief ������� ��������� ������ "RiemannSumTrapezoid"
         * @param start ����� ������� ������������� ���������.
         * @param finish ������ ������� ������������� ���������.
         * @param step ��� ���������� ������� ���������.
         * @param function �������, ������� ��������� ����������������.
        */
        RiemannSumTrapezoid(
            const double start,
            const double finish,
            const double step,
            const std::function<double(const double)> function);

        /**
         * @brief ������ ��������� ������� ��������.
         * @return ��������� ������� ���������.
        */
        double GetIntegral() const;
    };
}

