#pragma once
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
    public:
        /**
         * @brief ������� ��������� ������ "RiemannSumAverage"
         * @param start ����� ������� ������������� ���������.
         * @param finish ������ ������� ������������� ���������.
         * @param step ��� ���������� ������� ���������.
        */
        RiemannSumAverage(const double start, const double finish, const double step);

        /**
         * @brief ������ ��������� ������� ������� ���������������.
         * @return ��������� ������� ���������.
        */
        double GetIntegral() const;
    };
}

