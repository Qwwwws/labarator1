/*
�������� ������������ � � �++ ��� ��������� �������� :
1) int* ptr = (int*)malloc(sizeof(int)) - int* ptr = new int;
2) int* ptrArr = (int*)malloc(sizeof(int) * N) - int* ptrArr = new int[N];
3) free(ptr) - delete ptr;
4) free(ptrArr) - delete[] ptrArr;

� �++ ���������� �� ����������� ������������ ������ ?
��, � �++ ���������� ����������� ������������ ������ � ������� ��������� delete, ����� �������� ������ ������

����� �� ���������� ���� � �� �� ���������� ������ ������ ?
���, � C++ ������ ���������� ���� � �� �� ���������� ������ ������, ������� ������� ��� ����� �������� � ��������������� ��������� ���������.

� ����� �� ���������� ������������ ������ ?
� C++ ������������ ������ ���������� ������, ��� ��� ������������ ������ - ��� ������, ������� �� ���� �������� � ���������.
��� �� ����� ������ � ������ �, �������������, �� �������� ������������ � ������� �������
*/

// ����������� ���������
// ��� ���� :D

//#include <iostream>  
//
//using namespace std;
//
//int main() {
//    int first_num = 0;
//    int second_num = 1;
//    int n;
//
//    cout << "Enter the amount of lines: ";
//    cin >> n;
//
//    int next_number;
//    for (int i = 1; i <= n; i++) {
//
//        first_num = 0;
//        second_num = 1;
//
//        cout << second_num << "\t";
//
//        for (int j = 1; j < i; j++) {
//
//            next_number = first_num + second_num;
//
//            cout << next_number << "\t";
//
//            first_num = second_num;
//            second_num = next_number;
//        }
//
//        cout << "\n";
//    }
//
//    return 0;
//}