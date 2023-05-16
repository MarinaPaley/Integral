#include "CppUnitTest.h"
#include "../Solver/RiemannSumLeft.h"
#include "../Solver/MathHelper.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTests
{
    TEST_CLASS(RiemannSumLeft)
    {
    public:

        TEST_METHOD(GetValue_ValidData_Success)
        {
            // arrange
            auto function = [](const double x) {return x * x; };
            auto left = 0.0;
            auto right = 1.0;
            const auto step = 0.0001;
            const auto leftSum = new miit::solver::RiemannSumLeft;
            const auto expected = 1.0 / 3;

            // act
            const auto actual = leftSum->GetValue( left, right, step, function );

            // assert
            Assert::IsTrue(miit::math::MathHelper::AreEqual(expected, actual, 0.5 ));
        }

        TEST_METHOD(GetValue_LeftGreaterRightRange_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 1.0;
            const auto right = 0.0;
            const auto step = 0.0001;
            const auto leftSum = new miit::solver::RiemannSumLeft;

            //act & assert
            Assert::ExpectException <std::logic_error>([leftSum, left, right, step, function]()
                {auto x = leftSum->GetValue(left, right, step, function); });
        }

        TEST_METHOD(Ctor_LeftSameRightRange_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 0.0;
            const auto right = 0.0;
            const auto step = 0.0001;

            const auto leftSum = new miit::solver::RiemannSumLeft;

            //act & assert
            Assert::ExpectException <std::logic_error>([leftSum, left, right, step, function]()
                {auto x = leftSum->GetValue(left, right, step, function); });
        }

        TEST_METHOD(Ctor_NegativeStep_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 0.0;
            const auto right = 1.0;
            const auto step = - 0.0001;

            const auto leftSum = new miit::solver::RiemannSumLeft;

            //act & assert
            Assert::ExpectException <std::logic_error>([leftSum, left, right, step, function]()
                {auto x = leftSum->GetValue(left, right, step, function); });
        }

        TEST_METHOD(Ctor_ZeroStep_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 1.0;
            const auto right = 0.0;
            const auto step = 0.0001;
            const auto leftSum = new miit::solver::RiemannSumLeft;

            //act & assert
            Assert::ExpectException <std::logic_error>([leftSum, left, right, step, function]()
                {auto x = leftSum->GetValue(left, right, step, function); });
        }
    };
}
