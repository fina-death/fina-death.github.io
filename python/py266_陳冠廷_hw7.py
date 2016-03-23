import urllib.request
from html.parser import HTMLParser

response = urllib.request.urlopen(
    'https://tw.movies.yahoo.com/movieinfo_main.html/id=6036')
temptext = response.read().decode('utf_8')


class myparser(HTMLParser):

    def __init__(self):
        HTMLParser.__init__(self)
        self.isNumber = 0
        self.numbers = dict()
        self.gettag = 0

    def handle_data(self, data):
        if self.isNumber == 2:
            self.numbers.update({data: ''})
            self.tempkey = data
        elif self.isNumber == 3:
            self.numbers.update({self.tempkey:self.numbers.get(self.tempkey)+data})
        elif self.isNumber == 5:
            self.numbers.update({'中文': data})
        elif self.isNumber == 6:
            self.numbers.update({'英文': data})
        elif self.isNumber == 7:
            self.numbers.update({'介紹': data})
            self.isNumber = 0

    def handle_starttag(self, tag, attrs):
        if tag == 'p':
            self.gettag = 1
        elif tag == 'div' and attrs == [('class', 'text bulletin')]:
            self.gettag = 2

        if tag == 'span' and attrs == [('class', 'tit')] and self.gettag == 1:
            self.isNumber = 2
        elif tag == 'span' and attrs == [('class', 'dta')] and self.gettag == 1:
            self.isNumber = 3
        elif tag == 'h4' and self.gettag == 2:
            self.isNumber = 5
        elif tag == 'h5' and self.gettag == 3:
            self.isNumber = 6
        elif tag == 'div' and attrs == [('class', 'text full')]:
            self.isNumber = 7

    def handle_endtag(self, tag):
        if tag == 'p':
            self.gettag = 0
            self.isNumber = 0
        elif tag == 'h4':
            self.gettag = 3
            self.isNumber = 0
        elif tag == 'h5':
            self.gettag = 0
            self.isNumber = 0

Parser = myparser()
Parser.feed(temptext)

filenew = open('6036.txt', 'w', encoding='UTF-8')
filenew.write('電影名稱(中文): '+Parser.numbers.get('中文')+'\n')
filenew.write('電影名稱(英文): '+Parser.numbers.get('英文')+'\n')
filenew.write('上映日期: '+Parser.numbers.get('上映日期：')+'\n')
filenew.write('類    型: '+Parser.numbers.get('類\u3000\u3000型：')+'\n')
filenew.write('片    長: '+Parser.numbers.get('片\u3000\u3000長：')+'\n')
filenew.write('導    演: '+Parser.numbers.get('導\u3000\u3000演：')+'\n')
filenew.write('演    員: '+Parser.numbers.get('演\u3000\u3000員：')+'\n')
filenew.write('發行公司: '+Parser.numbers.get('發行公司：')+'\n')
filenew.write('官方網站: '+Parser.numbers.get('官方網站：')+'\n')
filenew.write('劇情介紹: '+Parser.numbers.get('介紹'))
filenew.close()
print('finish')
