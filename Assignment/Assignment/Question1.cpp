#include "io.h"   
#include "Question1.h"

void Question1::OddPlusMin()
{
    cout << "7���� ������ ���ʷ� �Է��ϼ��� : " << endl;

    //  �̵� �� Ȧ���� �ڿ������� ��� ��� �� ���� ���ϱ�
    for (int i = 0; i < 7; i++) {
        cin >> Num;
        if (Num % 2 == 1) {
            Sum += Num;

            // �� Ȧ���� �� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�
            if (Num < Min)
            {
                Min = Num;
            }
        }
    }
    cout << Sum << endl;
    cout << Min << endl;
}

