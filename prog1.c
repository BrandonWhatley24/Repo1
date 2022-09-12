include <stdio.h>

int main() {
	int SIZE = 5;
	int[SIZE] arr = {0, 1, 2, 3, 4}

	for(int i = 0; i < SIZE; i++){
		printf("%d %t", arr[i]);
	}
	return 0;
}
