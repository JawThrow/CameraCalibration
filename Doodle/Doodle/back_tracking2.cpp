/*this source from https://blog.encrypted.gg/732?category=773649 */
#include "pch.h"
#include <iostream>
using namespace std;

int n, m;
void func(int* arr, int k) 
{ // ���� k������ ���� ������.
	if (k == m) 
	{ // m���� ��� ��������
		for (int i = 0; i < m; i++) cout << arr[i] + 1 << ' '; // arr�� ����ص� ���� ���.(0���� m-1������ �ƴ϶� 1���� m�����̹Ƿ� +1�� ����)
		cout << '\n';
		return;
	}
	int st = 0;
	if (k != 0) 
		st = arr[k - 1];
	for (int i = st; i < n; i++) 
	{ // 1���� n������ ���� ����
		arr[k] = i; // k��° ���� i�� ����
		func(arr, k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��      
	}
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	int arr[m] = {};
	func(arr, 0);
}