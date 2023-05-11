#include "CppUnitTest.h"
#include "../Solver/RiemannSumLeft.h"
#include "../Solver/MathHelper.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTests
{
    TEST_CLASS(RiemannSumLeft)
    {
    public:

        TEST_METHOD(Ctor_ValidData_Success)
        {
            // arrange & act
            auto function = [](const double x) {return x * x; };
            auto left = 0.0;
            auto right = 1.0;
            const auto step = 0.0001;
            const auto leftSum = new miit::solver::RiemannSumLeft{ left, right, step, function };

            // assert
            Assert::IsNotNull(leftSum);
        }

        TEST_METHOD(Ctor_LeftGreaterRightRange_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 1.0;
            const auto right = 0.0;
            const auto step = 0.0001;

            //act & assert
            Assert::ExpectException <std::logic_error>([left, right, step, function]()
                {auto x =
                new miit::solver::RiemannSumLeft{ left, right, step, function }; });
        }

        TEST_METHOD(Ctor_LeftSameRightRange_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 0.0;
            const auto right = 0.0;
            const auto step = 0.0001;

            //act & assert
            Assert::ExpectException <std::logic_error>([left, right, step, function]()
                {auto x = new miit::solver::RiemannSumLeft{ left, right, step, function }; });
        }

        TEST_METHOD(Ctor_NegativeStep_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 0.0;
            const auto right = 1.0;
            const auto step = - 0.0001;

            //act & assert
            Assert::ExpectException <std::logic_error>([left, right, step, function]()
                {auto x =
                new miit::solver::RiemannSumLeft{ left, right, step, function }; });
        }

        TEST_METHOD(Ctor_ZeroStep_ExceptionExpected)
        {
            // arrange
            const auto function = [](const double x) {return x * x; };
            const auto left = 1.0;
            const auto right = 0.0;
            const auto step = 0.0001;

            //act & assert
            Assert::ExpectException <std::logic_error>([left, right, step, function]()
                {auto x = new miit::solver::RiemannSumLeft{ left, right, step, function }; });
        }

        TEST_METHOD(GetValue_ValidData_Success)
        {
            // arrange
            auto function = [](const double x) {return x * x; };
            auto left = 0.0;
            auto right = 1.0;
            const auto step = 0.0001;
            const auto leftSum = new miit::solver::RiemannSumLeft{ left, right, step, function };
            const auto precision = 0.05;
            const auto expected = 1.0 / 3;

            // act
            const auto actual = leftSum->GetValue();

            // assert
            Assert::IsTrue(miit::math::MathHelper::AreEqual(actual, expected, precision));
        }
    };
}
