#pragma once
#include <functional>
namespace
{
    /**
    * @brief ������ ��������� ������� ������� ���������������.
    */
    class RiemannSumAverage
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
         * @brief ������� ��������� ������ "RiemannSumAverage"
         * @param start ����� ������� ������������� ���������.
         * @param finish ������ ������� ������������� ���������.
         * @param step ��� ���������� ������� ���������.
         * @param function �������, ������� ��������� ����������������.
        */
        RiemannSumAverage(
            const double start,
            const double finish,
            const double step,
            const std::function<double(const double)> function);

        /**
         * @brief ������ ��������� ������� ������� ���������������.
         * @return ��������� ������� ���������.
        */
        double GetIntegral() const;
    };
}

