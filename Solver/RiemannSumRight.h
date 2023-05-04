#pragma once
/**
* @brief ������ ��������� ������� ������ ���������������.
*/
class RiemannSumRight
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
     * @brief ������� ��������� ������ "RiemannSumRight"
     * @param start ����� ������� ������������� ���������.
     * @param finish ������ ������� ������������� ���������.
     * @param step ��� ���������� ������� ���������.
    */
    RiemannSumRight(const double start, const double finish, const double step);

    /**
     * @brief ������ ��������� ������� ������ ���������������.
     * @return ��������� ������� ���������.
    */
    double GetIntegral() const;
};

