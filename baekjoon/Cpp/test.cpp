#include <iostream>
#include <string>
#include <vector>
#include <array>


using namespace std;

template <size_t N>
void pri(const std::array<int, N>& arr2)
{
	for (auto element : arr2)
		cout << element << endl;
}

int main()
{
	array<int, 5> arr2 = {1,2,3,4};

	//cout << arr2.begin() << " " << arr2.end();
	for (auto it = arr2.begin(); it != arr2.end(); it++)
	{
		auto element = (*it);
		cout << element << endl;
	}

	return 0;
}