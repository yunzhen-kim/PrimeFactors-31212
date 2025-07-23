#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> generatePrimeFactors(int n) {
		vector<int> result = {};
		if (n == 1) return result;
		if (n > 1) {
			result.push_back(n);
			return result;
		}
	}
};