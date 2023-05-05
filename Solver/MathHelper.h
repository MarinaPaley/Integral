#pragma once

namespace miit::math {
    class MathHelper
    {
     /**
    @brief ����� ��������� ���� ������������ ����� � �������� ���������.
    @param lha ������ �����.
    @param rha ������ �����.
    @param precision �������� ���������.
    @return true, ���� \a lha � \a rha �����.
    */
        bool AreEqual(
            const double lha,
            const double rha,
            const double precision);

        /**
       @brief ����� ��������� ���� ������������ ����� � ��������� �� ���������.
       @param lha ������ �����.
       @param rha ������ �����.
       @return true, ���� \a lha � \a rha �����.
       */
        bool AreEqual(
            const double lha,
            const double rha);
    };
}