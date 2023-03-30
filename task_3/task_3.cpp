#include <iostream>
#include <string>

using namespace std;
template <typename T>
void qsort(T* mass, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mass[i] < mass[j])
			{
				T temp = mass[i];
				mass[i] = mass[j];
				mass[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << " ";
	}
		cout << endl;
}

int main()
{
	int mass1[] = { 2,3,4,6,5,33,32,4,1,56,323,231 };
	int n1 = sizeof(mass1) / sizeof(mass1[0]);
	qsort<int>(mass1, n1);
	
		std::string mass2[] = { "34", "gf", "fd", "df","efddf","dfsmfsmf" };

	int n2 = sizeof(mass2) / sizeof(mass2[0]);

	qsort<string>(mass2, n2);
	return 0;
}