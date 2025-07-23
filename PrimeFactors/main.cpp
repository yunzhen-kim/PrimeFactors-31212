#include <gmock/gmock.h>
#include "prime_factors.cpp"

using namespace testing;

class PrimeFactorsFixture : public Test {
public:
	PrimeFactors pf;
	vector<int> expected;
};

TEST_F(PrimeFactorsFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, pf.generatePrimeFactors(1));
}

TEST_F(PrimeFactorsFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, pf.generatePrimeFactors(2));
}

TEST_F(PrimeFactorsFixture, Of3) {
	expected = {3};
	EXPECT_EQ(expected, pf.generatePrimeFactors(3));
}

TEST_F(PrimeFactorsFixture, Of4) {
	expected = {2, 2};
	EXPECT_EQ(expected, pf.generatePrimeFactors(4));
}

TEST_F(PrimeFactorsFixture, Of5) {
	expected = {5};
	EXPECT_EQ(expected, pf.generatePrimeFactors(5));
}

TEST_F(PrimeFactorsFixture, Of6) {
	expected = {2,3};
	EXPECT_EQ(expected, pf.generatePrimeFactors(6));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}