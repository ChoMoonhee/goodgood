/*************************************************************************
*                                                                        *
* problem 3 :                                                            *
*             ���� ����                                                  *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 2 �г�                        *
*                                                      20083277 ������   *
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
		int num1, num2, sum, diff, absdiff, multi, share, surplus, max, iden; /* ���� ���� */
		
		inStream >> num1 >> num2;
		sum = num1 + num2;			/* ��, ��, ���밪, ��, ��, ������ �ľ� */
		diff = num1 - num2;
		absdiff = abs(num1-num2);
		multi = num1 * num2;
		share = num1 / num2;
		surplus = num1%num2;
		iden = 1;
		max = num1;

		if(num1>num2)	/* �� ���� ���Ͽ���, ū �� �ľ� */
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
		 


