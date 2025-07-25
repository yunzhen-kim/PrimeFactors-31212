#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> generatePrimeFactors(int number) {
		vector<int> result = {};
		int devisor = 2;
		for (devisor = 2; number > 1; ++devisor) {
			while (number % devisor == 0) {
				result.push_back(devisor);
				number /= devisor;
			}
		}
		return result;
	}
};