#include <iostream>

using namespace std;

template <class Type>		// ���׸��� �����α׷��� ����� �κ�

int generic(Type* a, Type b)
{
	int i;

	// a[i] == '\0' �� c family������ �迭�� ���� null�� ǥ���� null�� �κб��� �˻��Ұ� ����
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