#include <iostream>

using namespace std;

template <class Type>		// 제네릭한 부프로그래밍 만드는 부분

int generic(Type* a, Type b)
{
	int i;

	// a[i] == '\0' 즉 c family에서는 배열의 끝을 null로 표현함 null인 부분까지 검색할것 지시
	for (i = 0; a[i] != '\0' ; i++) {
		if (b == a[i])
			return i;
	}
	return -1;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9};
	float b[] = {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.2};

	if (generic(a, 3) > 0){
		cout << "3 is index of " << generic(a, 3) << endl;
	}
	else{
		cout << "3 doesn't exist " << endl;
	}

	if (generic(b, (float)5.1) > 0){
		cout << "5.1 is index of " << generic(a, 5) << endl;
	}
	else{
		cout << "5.1 doesn't exis " << endl;
	}
	return 0;
}