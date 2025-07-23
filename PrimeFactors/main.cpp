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

TEST_F(PrimeFactorsFixture, Of7) {
	expected = {7};
	EXPECT_EQ(expected, pf.generatePrimeFactors(7));
}

TEST_F(PrimeFactorsFixture, Of8) {
	expected = {2,2,2};
	EXPECT_EQ(expected, pf.generatePrimeFactors(8));
}

TEST_F(PrimeFactorsFixture, Of9) {
	expected = {3,3};
	EXPECT_EQ(expected, pf.generatePrimeFactors(9));
}

TEST_F(PrimeFactorsFixture, Of10) {
	expected = { 2,5 };
	EXPECT_EQ(expected, pf.generatePrimeFactors(10));
}

TEST_F(PrimeFactorsFixture, Of11) {
	expected = { 11 };
	EXPECT_EQ(expected, pf.generatePrimeFactors(11));
}

TEST_F(PrimeFactorsFixture, Of12) {
	expected = {2,2,3};
	EXPECT_EQ(expected, pf.generatePrimeFactors(12));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}