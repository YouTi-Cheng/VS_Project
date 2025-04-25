#include<stdio.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

//封装
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
	//播放音乐
	//MCIERROR ret1 = mciSendString("open assets/测试.mp3",NULL,0,NULL);
	//if (ret1 != 0)
	//{
	//	char err[100] = { 0 };
	//	mciGetErrorString(ret1, err, sizeof(err));
	//	puts(err);
	//}
	//MCIERROR ret2 = mciSendString("play assets/测试.mp3",NULL,0,NULL);

	//if (ret2 != 0)
	//{
	//	char err[100] = { 0 };
	//	mciGetErrorString(ret2, err, sizeof(err));
	//	puts(err);
	//}
	//mciSendString("setaudio assets/测试.mp3 volume to 100", NULL, 0,NULL);
	////如果失败返回非0值，如果成功返回0
	
	playBGM("assets/测试2.mp3");

	getchar();
	return 0;
}