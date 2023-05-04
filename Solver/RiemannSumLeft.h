#pragma once
/**
* @brief ������ ��������� ������� ����� ���������������.
*/
class RiemannSumLeft
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
     * @brief ������� ��������� ������ "RiemannSumLeft"
     * @param start ����� ������� ������������� ���������.
     * @param finish ������ ������� ������������� ���������.
     * @param step ��� ���������� ������� ���������.
    */
    RiemannSumLeft(const double start, const double finish, const double step);

    /**
     * @brief ������ ��������� ������� ����� ���������������.
     * @return ��������� ������� ���������.
    */
    double GetIntegral() const;

};

