#include<stdio.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

//��װ
void playBGM(const char* music)
{
	char cmd[100] = { 0 };
	sprintf(cmd, "open %s alias bgm", music);
	MCIERROR ret = mciSendString(cmd, NULL, 0, NULL);
	if (ret)
	{
		char err[100] = { 0 };
		mciGetErrorString(ret, err, sizeof(err));
		puts(err);
	}
	ret = mciSendString("play bgm",NULL,0,NULL);
	if (ret)
	{
		char err[100] = { 0 };
		mciGetErrorString(ret, err, sizeof(err));
		puts(err);
	}
}


int main()
{
	//��������
	//MCIERROR ret1 = mciSendString("open assets/����.mp3",NULL,0,NULL);
	//if (ret1 != 0)
	//{
	//	char err[100] = { 0 };
	//	mciGetErrorString(ret1, err, sizeof(err));
	//	puts(err);
	//}
	//MCIERROR ret2 = mciSendString("play assets/����.mp3",NULL,0,NULL);

	//if (ret2 != 0)
	//{
	//	char err[100] = { 0 };
	//	mciGetErrorString(ret2, err, sizeof(err));
	//	puts(err);
	//}
	//mciSendString("setaudio assets/����.mp3 volume to 100", NULL, 0,NULL);
	////���ʧ�ܷ��ط�0ֵ������ɹ�����0
	
	playBGM("assets/����2.mp3");

	getchar();
	return 0;
}