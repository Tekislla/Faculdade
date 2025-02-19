import requests
from bs4 import BeautifulSoup

url = "https://www.nytimes.com/"
r = requests.get(url)
raw_html = r.text

soup = BeautifulSoup(raw_html, "html.parser")
raw_headers = soup.find_all("h3", {"class": "indicate-hover"})
with open("headers_artigos.txt", "w") as open_file:
    for h in raw_headers: {
        open_file.write(h.text + "\n")
    }