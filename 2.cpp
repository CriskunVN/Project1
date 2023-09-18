#include<bits/stdc++.h>
using namespace std;
int main () {
	
int n ; cin >> n; // biến n là số lượng phần tử trong mảng 
 int a[n]; // khai báo 1 mảng a có n phần tử
 // 1 vòng lặp từng phần tử trong mảng
 for (int i = 0 ; i < n ;i++) {
	cin >> a[i]; // nhập giá trị từng phần tử trong mảng 
 }
 // 1 vòng lặp từng phần tử trong mảng 
 for (int i = 0 ; i < n ; i++) {
	cout << a[i] << " "; // xuất các giá trị của từng phần tử trong mảng 
 }
	return 0;
}