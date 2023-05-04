#pragma once
namespace miit::solver {
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
    public:
        /**
         * @brief ������� ��������� ������ "RiemannSumTrapezoid"
         * @param start ����� ������� ������������� ���������.
         * @param finish ������ ������� ������������� ���������.
         * @param step ��� ���������� ������� ���������.
        */
        RiemannSumTrapezoid(const double start, const double finish, const double step);

        /**
         * @brief ������ ��������� ������� ��������.
         * @return ��������� ������� ���������.
        */
        double GetIntegral() const;
    };
}

