#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
	����Ϊ4�����ɷ��Ĺ���:
		A˵�������ҡ�

		B˵����C��

		C˵����D��

		D˵��C�ں�˵
		��֪3����˵���滰��1����˵���Ǽٻ���
		�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�*/
	for (char killer = 'a'; killer <= 'd'; killer++) {
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
			printf("%c", killer);
		}
	}
	return 0;
}