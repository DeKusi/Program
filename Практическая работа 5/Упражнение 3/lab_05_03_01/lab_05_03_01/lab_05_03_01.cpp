#include <iostream>
using namespace std;

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));


int main()
{
	setlocale(LC_ALL, "Ru");

	int N;
	cout << "Введите размер массива: ";
	cin >> N;

	int my_choose = 0;
	int* A = new int[N];
	cout << "Введите значения элементов массива\n";
	for (int i = 0; i < N; i++)
	{
		cout << "A [" << i << "] = ";
		cin >> A[i];
	}
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;
	cout << "Исходные данные: \n";
	show_array(A, N);
	bool (*from_f[2])(int, int) = { from_min,from_max };
	bubble_sort(A, N, from_f[my_choose - 1]);

	if ((my_choose == 1) or (my_choose == 2))
	{
		cout << "Отсортированный мссив: \n";
		show_array(A, N);
	}

	//!!!!!!!!
	delete[] A;
}
void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << " ";
		cout << "\n";
	}
}
bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}