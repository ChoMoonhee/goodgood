/*************************************************************************
*                                                                        *
* problem 3 :                                                            *
*             정수 연산                                                  *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 2 학년                        *
*                                                      20083277 조문희   *
*                                                                        *
*************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


void main()
{
	ifstream inStream;
	int numTestCases;

	inStream. open("input.txt");
	if (inStream. fail())
	{
		cerr << "Input file opening failed." << endl;
		exit(1);
	}

	inStream >> numTestCases;

	for(int i=0; i<numTestCases; i++)
	{
		int num1, num2, sum, diff, absdiff, multi, share, surplus, max, iden; /* 변수 선언 */
		
		inStream >> num1 >> num2;
		sum = num1 + num2;			/* 합, 차, 절대값, 곱, 몫, 나머지 파악 */
		diff = num1 - num2;
		absdiff = abs(num1-num2);
		multi = num1 * num2;
		share = num1 / num2;
		surplus = num1%num2;
		iden = 1;
		max = num1;

		if(num1>num2)	/* 두 수의 동일여부, 큰 수 파악 */
		{
			max = num1;
			iden = 0;
		}

		else if(num1<num2)
		{
			max = num2;
			iden = 0;
		}

		cout << sum << " " << diff << " " << absdiff << " " << multi << " " << share << " " << surplus << " " << max << " " << iden << endl;
		cout << "clear !!! 20140409"

	}
	
	inStream. close();

}	
		 


