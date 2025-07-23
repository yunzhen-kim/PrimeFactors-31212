#include <gmock/gmock.h>
#include "prime_factors.cpp"

using namespace testing;

TEST(PrimeFactorsTest, Of1) {
	PrimeFactors pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.generatePrimeFactors(1));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}