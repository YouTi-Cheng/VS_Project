from selenium import webdriver
from selenium.webdriver.chrome.service import Service

# ���� WebDriver ����ָ��ʹ��chrome���������
wd = webdriver.Edge(service=Service(r'D:\Tools\msedgedriver.exe'))

# ����WebDriver �����get���� �������������ָ����ַ
wd.get('https://www.baidu.com')

# ������������Զ��ر�����������Ǻܶ���˵������
# �������ȴ��û����룬��ֹ����
input('a')