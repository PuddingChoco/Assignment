#include "io.h"   
#include "Question2.h"

void Question2::HelloJudge()
{
    cout << "숫자를 입력하세요 : ";
    cin >> Num;

    for (int i = 0; i < Num; i++)
    {
        cout << "Hello World, Judge " << i + 1 << "!" << endl;
    }
}

