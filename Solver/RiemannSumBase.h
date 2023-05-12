#pragma once
#include <functional>

namespace miit::solver
{
    /**
   * @brief ������� ����� ������� ���������.
   */
    class RiemannSumBase
    {
    protected:
        RiemannSumBase() = default;

    public:
        virtual ~RiemannSumBase() = 0;

        /**
        * @brief ������ ���������.
        * @returns ��������� ������� ���������.
        * @param start ����� ������� ������������� ���������.
        * @param finish ������ ������� ������������� ���������.
        * @param step ��� ���������� ������� ���������.
        * @param function �������, ������� ��������� ����������������.
       */
        virtual double GetValue(
            const double start,
            const double finish,
            const double step,
            const std::function<double(const double)>& function ) const;
    };
}

