#include "io.h"   
#include "Question1.h"

void Question1::OddPlusMin()
{
    cout << "7개의 정수를 차례로 입력하세요 : " << endl;

    //  이들 중 홀수인 자연수들을 모두 골라 그 합을 구하기
    for (int i = 0; i < 7; i++) {
        cin >> Num;
        if (Num % 2 == 1) {
            Sum += Num;

            // 고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오
            if (Num < Min)
            {
                Min = Num;
            }
        }
    }
    cout << Sum << endl;
    cout << Min << endl;
}

