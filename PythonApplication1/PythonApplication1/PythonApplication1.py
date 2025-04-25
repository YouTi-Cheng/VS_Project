from selenium import webdriver
from selenium.webdriver.chrome.service import Service

# 创建 WebDriver 对象，指明使用chrome浏览器驱动
wd = webdriver.Edge(service=Service(r'D:\Tools\msedgedriver.exe'))

# 调用WebDriver 对象的get方法 可以让浏览器打开指定网址
wd.get('https://www.baidu.com')

# 程序运行完会自动关闭浏览器，就是很多人说的闪退
# 这里加入等待用户输入，防止闪退
input('a')