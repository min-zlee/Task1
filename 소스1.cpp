#include <iostream>

using namespace std;

void NUMBERS(int arr[], int size) {
    // ����
    cout << size << "���� ���� �Է�:" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "��° ���� �Է� : ";
        cin >> arr[i];
    }
}

int SUM(int arr[], int size) {
    // ����
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
double AVG(int arr[], int size) {
    // ���
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
    cout << "�� ���� ���ڸ� �Է��Ͻðڽ��ϱ� ? �ִ� 10��" << endl;
    cin >> size;

    if (size < 2 || 10 < size) {
        cout << "2 �̻� 10������ ���ڸ� �Է����ּ���" << endl;
        return 0;
    }


    int arr[10];
    NUMBERS(arr, size);
    int total = SUM(arr, size);
    double average = AVG(arr, size);

    cout << "�հ�: " << total << endl;
    cout << "���: " << average << endl;



    return 0;
}