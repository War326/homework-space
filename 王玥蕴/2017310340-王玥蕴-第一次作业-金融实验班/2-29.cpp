#include <iostream>
using namespace std;
int main() {
	int i, j, n, m;
	i = 2;
	while (i<101) {
		m = 1, n = i / 2; j = 2;
		while (j <= n) {
			if (i%j == 0)
			{
				m = 0;
				break;
			}
			j++;
		}
		if (m)
			cout << i << " ";
		i++;
	}
	return 0;
}
