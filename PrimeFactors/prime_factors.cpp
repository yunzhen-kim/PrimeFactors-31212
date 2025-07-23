#include <vector>

class PrimeFactors {
public:
	void generatePrimeFactors(int n, std::vector<int>& actual_result) {
		actual_result.clear();
		if (n < 2) {
			return;
		}
		
		for (int i = 2; i * i <= n; ++i) {
			while (n % i == 0) {
				actual_result.push_back(i);
				n /= i;
			}
		}
		if (n > 1) {
			actual_result.push_back(n);
		}
	}
};