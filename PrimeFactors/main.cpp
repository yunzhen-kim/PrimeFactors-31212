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

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}