#pragma once
#include <functional>
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

    /**
     * @brief �������, ������� ��������� ����������������.
    */
    std::function<double(const double)> function;

public:
    /**
     * @brief ������� ��������� ������ "RiemannSumLeft"
     * @param start ����� ������� ������������� ���������.
     * @param finish ������ ������� ������������� ���������.
     * @param step ��� ���������� ������� ���������.
     * @param function �������, ������� ��������� ����������������.
    */
    RiemannSumLeft(
        const double start,
        const double finish,
        const double step,
        const std::function<double(const double)> function);

    /**
     * @brief ������ ��������� ������� ����� ���������������.
     * @return ��������� ������� ���������.
    */
    double GetIntegral() const;

};

