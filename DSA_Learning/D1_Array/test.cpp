#include<iostream>
using namespace std;

//Cho một mảng số nguyên. Hãy tìm giá trị lớn thứ hai trong mảng đó.
//Ví dụ: arr = [3, 5, 1, 9, 7]
int main(){
	int arr[10] = {3,5,1,9,7};
	int max1 = 0;
	int max2 = 0;
	for(int i = 0; i<5; i++){
		int x = arr[i];
		if (x > max1) {
   			 max2 = max1;
    		max1 = x;
			} 		
		else if (x > max2 && x != max1) {
    		max2 = x;
			}
	} 
	cout << max2;
	return 0;
}