#include "io.h"   
#include "Question2.h"

void Question2::HelloJudge()
{
    cout << "���ڸ� �Է��ϼ��� : ";
    cin >> Num;

    for (int i = 0; i < Num; i++)
    {
        cout << "Hello World, Judge " << i + 1 << "!" << endl;
    }
}

