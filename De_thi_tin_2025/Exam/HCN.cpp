#include <iostream>
#include <algorithm>
#include <vector>

/*
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	struct H {
		uint32_t d, r;
		uint32_t s;

		bool operator<(const H& other) const {
			return s < other.s;
		}
	};

	uint32_t N;
	std::cin >> N;

	std::vector<H> arr(N);
	for (uint32_t i = 0; i < N; ++i) {
		std::cin >> arr[i].d >> arr[i].r;

		arr[i].s = arr[i].d * arr[i].r;
	}

	std::sort(arr.begin(), arr.end());
	std::reverse(arr.begin(), arr.end());

	uint32_t res = 0;
	for (int i = 0; i < arr.size(); ++i) {
		if (i == 0) {
			res++;
			continue;
		}
		if (arr[i - 1].s == arr[i].s) continue;

		res++;
	}

	std::cout << res << '\n';
}
*/