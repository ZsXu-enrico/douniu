
#include <iostream>
#include<iostream>
#include<cmath>
using namespace std;
int sumyu(int d[], int a, int b, int c) { /* 求除牛以外的点数（另外两个数除以10的余数）*/
	int q = 0;
	int sum = 0;
	int sumyu = 0;
	while (q <= 4) {
		if (q != a && q != b && q != c) {
			sum += d[q];
		}
		q++;
	}
	sumyu = fmod(double(sum), 10);
	if (fmod(double(sum), 10) == 0)
		sumyu = 10;
	return sumyu;
}
void paixv(int* p, int n) {/*构造冒泡排序将数组数字从大到小排序*/
	int i = 0, j = 0;
	bool noswap;
	int tmp = 0;
	for (i = 0; i < n - 1; i++) {
		noswap = true;
		for (j = n - 1; j > i; j--) {
			if (p[j] >= p[j - 1]) {
				tmp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = tmp;
				noswap = false;
			}
		}
		if (noswap)
			break;
	}
}
void bijiao(int a[], int b[], int& x, int& y) {/*依次比较两个数组中元素大小*/
	int i = 0;
	for (i = 0; i <= 4; i++)
		if (a[i] < b[i]) {
			y = y + 1;
			break;
		}
		else if (a[i] > b[i]) {
			x = x + 1;
			break;
		}
}






int main()
{
	char wan1[5] = { 0 }, wan2[5] = { 0 }, wan3[5] = { 0 };
	int  number1[5] = { 0 }, number2[5] = { 0 }, number3[5] = { 0 };
	int max1, max2, max3;
	int sumyushu1[50] = { 0 }, sumyushu2[50] = { 0 }, sumyushu3[50] = { 0 };
	int i = 0, m = 0, n = 0, t = 0;
	cout << "请输入获得的牌(无需带花色）" << endl;

	cout << "玩家1：";
	for (m = 0; m <= 4; m++)
		cin >> wan1[m];
	for (m = 0; m <= 4; m++) {
		if (wan1[m] == 'j' || wan1[m] == 'q' || wan1[m] == 'k' || wan1[m] == 'J' || wan1[m] == 'Q' || wan1[m] == 'K')
			number1[m] = 10;
		else if (wan1[m] == 'A' || wan1[m] == 'a')
			number1[m] = 1;
		else
			number1[m] = wan1[m] - '0';
	}//将玩家1所得到的牌转化为数字方便运算牛
	for (i = 0; i <= 2; i++) {
		for (m = 1; m <= 3; m++) {
			for (n = 2; n <= 4; n++) {
				if (fmod(double(number1[i] + number1[m] + number1[n]), 10) == 0 && i < m && m < n) {
					sumyushu1[t] = sumyu(number1, i, m, n);
					t++;
				}
			}
		}
	}
	if (t == 0)
		max1 = 0;
	else {
		max1 = 0;
		for (i = 0; i <= t - 1; i++) {
			{
				if (max1 < sumyushu1[i])
					max1 = sumyushu1[i];
			}
		}//得到玩家1牌得到的最大点数
	}
	switch (max1) {
	case 1:cout << "牛一" << endl; break;
	case 2:cout << "牛二" << endl; break;
	case 3:cout << "牛三" << endl; break;
	case 4:cout << "牛四" << endl; break;
	case 5:cout << "牛五" << endl; break;
	case 6:cout << "牛六" << endl; break;
	case 7:cout << "牛七" << endl; break;
	case 8:cout << "牛八" << endl; break;
	case 9:cout << "牛九" << endl; break;
	case 10:cout << "牛牛" << endl; break;
	case 0:cout << "没牛" << endl; break;
	}//输出玩家1牌所组成的点数




	cout << "玩家2：";
	for (m = 0; m <= 4; m++)
		cin >> wan2[m];
	for (m = 0; m <= 4; m++) {
		if (wan2[m] == 'j' || wan2[m] == 'q' || wan2[m] == 'k' || wan2[m] == 'J' || wan2[m] == 'Q' || wan2[m] == 'K')
			number2[m] = 10;
		else if (wan2[m] == 'A' || wan2[m] == 'a')
			number2[m] = 1;
		else
			number2[m] = wan2[m] - '0';
	}//将玩家2所得到的牌转化为数字方便运算牛
	for (i = 0; i <= 2; i++) {
		for (m = 1; m <= 3; m++) {
			for (n = 2; n <= 4; n++) {
				if (fmod(double(number2[i] + number2[m] + number2[n]), 10) == 0 && i < m && m < n) {
					sumyushu2[t] = sumyu(number2, i, m, n);
					t++;
				}
			}
		}
	}
	if (t == 0)
		max2 = 0;
	else {
		max2 = 0;
		for (i = 0; i <= t - 1; i++) {
			{
				if (max2 < sumyushu2[i])
					max2 = sumyushu2[i];
			}
		}//得到玩家2牌得到的最大点数
	}
	switch (max2) {
	case 1:cout << "牛一" << endl; break;
	case 2:cout << "牛二" << endl; break;
	case 3:cout << "牛三" << endl; break;
	case 4:cout << "牛四" << endl; break;
	case 5:cout << "牛五" << endl; break;
	case 6:cout << "牛六" << endl; break;
	case 7:cout << "牛七" << endl; break;
	case 8:cout << "牛八" << endl; break;
	case 9:cout << "牛九" << endl; break;
	case 10:cout << "牛牛" << endl; break;
	case 0:cout << "没牛" << endl; break;
	}//输出玩家2牌所组成的点数



	cout << "玩家3：";
	for (m = 0; m <= 4; m++)
		cin >> wan3[m];
	for (m = 0; m <= 4; m++) {
		if (wan3[m] == 'j' || wan3[m] == 'q' || wan3[m] == 'k' || wan3[m] == 'J' || wan3[m] == 'Q' || wan3[m] == 'K')
			number3[m] = 10;
		else if (wan3[m] == 'A' || wan3[m] == 'a')
			number3[m] = 1;
		else
			number3[m] = wan3[m] - '0';
	}//将玩家3所得到的牌转化为数字方便运算牛
	for (i = 0; i <= 2; i++) {
		for (m = 1; m <= 3; m++) {
			for (n = 2; n <= 4; n++) {
				if (fmod(double(number3[i] + number3[m] + number3[n]), 10) == 0 && i < m && m < n) {
					sumyushu3[t] = sumyu(number1, i, m, n);
					t++;
				}
			}
		}
	}
	if (t == 0)
		max3 = 0;
	else {
		max3 = 0;
		for (i = 0; i <= t - 1; i++) {
			{
				if (max3 < sumyushu3[i])
					max3 = sumyushu3[i];
			}
		}//得到玩家3牌得到的最大点数
	}
	switch (max3) {
	case 1:cout << "牛一" << endl; break;
	case 2:cout << "牛二" << endl; break;
	case 3:cout << "牛三" << endl; break;
	case 4:cout << "牛四" << endl; break;
	case 5:cout << "牛五" << endl; break;
	case 6:cout << "牛六" << endl; break;
	case 7:cout << "牛七" << endl; break;
	case 8:cout << "牛八" << endl; break;
	case 9:cout << "牛九" << endl; break;
	case 10:cout << "牛牛" << endl; break;
	case 0:cout << "没牛" << endl; break;
	}//输出玩家3牌所组成的点数


	int daxiao1[5] = { 0 }, daxiao2[5] = { 0 }, daxiao3[5] = { 0 };
	for (i = 0; i <= 4; i++) {
		if (wan1[i] == 'K' || wan1[i] == 'k')
			daxiao1[i] = 13;
		else if (wan1[i] == 'Q' || wan1[i] == 'q')
			daxiao1[i] = 12;
		else if (wan1[i] == 'J' || wan1[i] == 'j')
			daxiao1[i] = 11;
		else if (wan1[i] == 'A' || wan1[i] == 'a')
			daxiao1[i] = 1;
		else
			daxiao1[i] = wan1[i] - '0';
	}//将玩家一的牌转换成数字方便比较大小，并存入数组

	for (i = 0; i <= 4; i++) {
		if (wan2[i] == 'K' || wan2[i] == 'k')
			daxiao2[i] = 13;
		else if (wan2[i] == 'Q' || wan2[i] == 'q')
			daxiao2[i] = 12;
		else if (wan2[i] == 'J' || wan2[i] == 'j')
			daxiao2[i] = 11;
		else if (wan2[i] == 'A' || wan2[i] == 'a')
			daxiao2[i] = 1;
		else
			daxiao2[i] = wan2[i] - '0';
	}//将玩家二的牌转换成数字方便比较大小，并存入数组

	for (i = 0; i <= 4; i++) {
		if (wan3[i] == 'K' || wan3[i] == 'k')
			daxiao3[i] = 13;
		else if (wan3[i] == 'Q' || wan3[i] == 'q')
			daxiao3[i] = 12;
		else if (wan3[i] == 'J' || wan3[i] == 'j')
			daxiao3[i] = 11;
		else if (wan3[i] == 'A' || wan3[i] == 'a')
			daxiao3[i] = 1;
		else
			daxiao3[i] = wan3[i] - '0';
	}//将玩家三的牌转换成数字方便比较大小，并存入数组
	paixv(daxiao1, 5);
	paixv(daxiao2, 5);
	paixv(daxiao3, 5);//按从大到小排序


	if (max1 == max2 && max1 == max3 && max2 == max3) {
		bijiao(daxiao1, daxiao2, max1, max2);
		bijiao(daxiao2, daxiao3, max2, max3);
		bijiao(daxiao1, daxiao3, max1, max3);
		if (max1 == max2 && max1 == max3 && max2 == max3)
			cout << "平局" << endl;
		else if (max1 == max2 && max1 > max3)
			cout << "玩家1和玩家2胜利" << endl;
		else if (max1 == max3 && max1 > max2)
			cout << "玩家1和玩家3胜利" << endl;
		else if (max2 == max3 && max2 > max1)
			cout << "玩家2和玩家3胜利" << endl;
		else if (max1 > max2 && max1 > max3)
			cout << "玩家1胜利" << endl;
		else if (max2 > max1 && max2 > max3)
			cout << "玩家2胜利" << endl;
		else if (max3 > max1 && max3 > max2)
			cout << "玩家3胜利" << endl;
	}

	else if (max1 == max2 && max1 > max3) {
		bijiao(daxiao1, daxiao2, max1, max2);
		if (max1 == max2)
			cout << "玩家1和玩家2胜利" << endl;
		else if (max1 > max2)
			cout << "玩家1胜利" << endl;
		else if (max1 < max2)
			cout << "玩家2胜利" << endl;
	}

	else if (max1 == max3 && max1 > max2) {
		bijiao(daxiao1, daxiao3, max1, max3);
		if (max1 == max3)
			cout << "玩家1和玩家3胜利" << endl;
		else if (max1 > max3)
			cout << "玩家1胜利" << endl;
		else if (max1 < max3)
			cout << "玩家3胜利" << endl;
	}

	else if (max2 == max3 && max2 > max1) {
		bijiao(daxiao2, daxiao3, max2, max3);
		if (max2 == max3)
			cout << "玩家2和玩家3胜利" << endl;
		else if (max2 > max3)
			cout << "玩家2胜利" << endl;
		else if (max2 < max3)
			cout << "玩家3胜利" << endl;
	}

	else if (max1 > max2 && max1 > max3)
		cout << "玩家1胜利" << endl;

	else if (max2 > max1 && max2 > max3)
		cout << "玩家2胜利" << endl;

	else if (max3 > max1 && max3 > max2)
		cout << "玩家3胜利" << endl;//分类判断玩家胜利情况
	return 0;
}