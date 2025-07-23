#include <gmock/gmock.h>
#include "prime_factors.cpp"

using namespace testing;

TEST(PrimeFactorsTest, Of1) {
	PrimeFactors pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.generatePrimeFactors(1));
}

TEST(PrimeFactorsTest, Of2) {
	PrimeFactors pf;
	vector<int> expected = {2};
	EXPECT_EQ(expected, pf.generatePrimeFactors(2));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}