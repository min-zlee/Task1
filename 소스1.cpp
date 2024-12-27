#include <iostream>

using namespace std;

void NUMBERS(int arr[], int size) {
    // 저장
    cout << size << "개의 숫자 입력:" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "번째 숫자 입력 : ";
        cin >> arr[i];
    }
}

int SUM(int arr[], int size) {
    // 덧셈
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
double AVG(int arr[], int size) {
    // 평균
    double avg, sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = sum / size;

    return avg;

}


int main()
{
    int size = 0;
    cout << "몇 개의 숫자를 입력하시겠습니까 ? 최대 10개" << endl;
    cin >> size;

    if (size < 2 || 10 < size) {
        cout << "2 이상 10이하의 숫자만 입력해주세요" << endl;
        return 0;
    }


    int arr[10];
    NUMBERS(arr, size);
    int total = SUM(arr, size);
    double average = AVG(arr, size);

    cout << "합계: " << total << endl;
    cout << "평균: " << average << endl;



    return 0;
}