#include <iostream>
#include <map>
#include <vector>

/*
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	uint32_t N;
	std::cin >> N;
	
	std::map<long long, std::vector<uint32_t>> frqcy;

	long long* arrN = new long long[N];
	for (uint32_t i = 0; i < N; ++i) {
		std::cin >> arrN[i];
		if (frqcy.find(arrN[i]) == frqcy.end()) { // Cant find
			frqcy[arrN[i]] = { i };
			continue;
		}
		// Find
		frqcy[arrN[i]].push_back(i);
	}

	uint32_t dist = -1;
	for (const auto& i : frqcy) {
		auto& vec = i.second;
		int size = vec.size();
		if (size > 1) {
			for (int j = 0; j < size; ++j) {
				if (j + 1 == size) break;

				uint32_t temp = vec[j + 1] - vec[j];
				if (dist == -1) dist = temp;
				else if (temp < dist) dist = temp;
			}
		}
	}

	std::cout << dist << '\n';

	delete[] arrN;
}
*/