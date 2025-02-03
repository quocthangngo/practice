import requests
from bs4 import BeautifulSoup

response = requests.get("https://www.vietlott.vn")
# print(response.content)
soup = BeautifulSoup(response.content, "html.parser")
body = soup.find_all("div", class_="box_kqtt_nd_chinh")
# body = soup.find_all("div", {"class": "box_kqtt box_kqtt_orange CssLength3"})
for i in body:
    # having the QSMT result
    QSMT_result = i.find('h5')
    if(QSMT_result):
        cycle_time = QSMT_result.find_all('b')
        print(cycle_time)
        number_results = i.find_all("span", class_="bong_tron")
        for num in number_results:
            print(num.text)