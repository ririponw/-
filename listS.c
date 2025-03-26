#include "listS.h"
int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0; // move는 자리이동 횟수 카운터
	//원소의 크기를 비교하여 삽입위치k 찾기
	for (i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n)//삽입원소가 가장큰원소인 경우
		k = n;

	//마지막원소부터 k+1원소까지 뒤로 자리이동
	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x; //k에 삽입원소 저장
	return move;
}
int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0; // move는 자리이동 횟수 카운터
	//원소의 크기를 비교하여 삭제위치k 찾기
	for (i = 0; i < n; i++) {
		if (L[i]==x) {
			k = i;
			break;
		}
	}

	if (i == n) move = n;

	//k+1부터 마지막원소까지 앞으로 자리이동
	for (i = k; i < n - 1; i++) {
		L[i] = L[i + 1];
		move++;
	}

return move;

}
