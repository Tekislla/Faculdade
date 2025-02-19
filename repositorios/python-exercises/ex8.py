import requests
from bs4 import BeautifulSoup

headers_list = []

url = "https://www.nytimes.com/"
r = requests.get(url)
raw_html = r.text

soup = BeautifulSoup(raw_html, "html.parser")
raw_headers = soup.find_all("h3", {"class": "indicate-hover"})
for h in raw_headers: {
    headers_list.append(h.text)
}

print(headers_list)