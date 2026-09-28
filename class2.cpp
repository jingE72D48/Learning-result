#include<iostream>
using namespace std;
#include<string>

float namb[3];

int judge(float nam1, float nam2, float nam3) {
	bool t1 = (nam1 >= 60);
	bool t2 = (nam2 >= 60);
	bool t3 = (nam3 >= 60);
	return t1 + t2 + t3;
}

string pass(float k) {
	string result;
	if (k >= 60) {
		result = "及格";
	}
	else {
		result = "不及格";
	}
	return result;
}

int main() {
	cin >> namb[0] >> namb[1] >> namb[2];
	for (int i = 0;i <= 2;i++) {
		string finalresult = pass(namb[i]);
		cout << "第" << i + 1 << "名 " << namb[i] << "分 " << finalresult<<"\n";
	}
	int e = judge(namb[0], namb[1], namb[2]);
	cout << "及格人数:" << e;

}

