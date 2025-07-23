#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> generatePrimeFactors(int n) {
		vector<int> result = {};
		if (n == 1) return result;
		if (n > 1) {
			if (n == 4) {
				while (n % 2 == 0) {
					result.push_back(2);
					n /= 2;
				}
				return result;
			}
			
			if (n == 6) {
				while (n % 2 == 0) {
					result.push_back(2);
					n /= 2;
				}
				while (n % 3 == 0) {
					result.push_back(3);
					n /= 3;
				}
				return result;
			}
			result.push_back(n);
			return result;
		}
	}
};