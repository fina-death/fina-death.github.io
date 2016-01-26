#-*-coding:UTF-8 -*-
# 範例程式 EX02_07.py
#
# 下面 zipcode 存放台北市，基隆市，新北市各區的郵遞區號
#
# Q1.如何透過迴圈把台北市的所有郵遞區號列出
# Q2.如何輸入一個區域名稱，找出這個區域所代表的郵遞區號?  (ex. 輸入:信義區  回傳:201)
# Q3.如何輸入一個郵遞區號後，找出這個郵遞區號所代表的區域? (ex. 輸入:106  回傳:大安區)

zipcode = {"台北市":{"中正區": 100, "大同區": 103, "中山區": 104, "松山區": 105, "大安區": 106, "萬華區": 108, "信義區": 110, "士林區": 111, "北投區": 112, "內湖區": 114, "南港區": 115, "文山區": 116}, "基隆市":{"仁愛區": 200, "信義區": 201, "中正區": 202, "中山區": 203, "安樂區": 204, "暖暖區": 205, "七堵區": 206},"新北市": {"萬里區": 207, "金山區": 208, "板橋區": 220, "汐止區": 221, "深坑區": 222, "石碇區": 223, "瑞芳區": 224, "平溪區": 226, "雙溪區": 227, "貢寮區": 228, "新店區": 231, "坪林區": 232, "烏來區": 233, "永和區": 234, "中和區": 235, "土城區": 236, "三峽區": 237, "樹林區": 238, "鶯歌區": 239, "三重區": 241, "新莊區": 242, "泰山區": 243, "林口區": 244, "蘆洲區": 247, "五股區": 248, "八里區": 249, "淡水區": 251, "三芝區": 252, "石門區": 253}}


def list_zip(city):
    for i in zipcode.get(city):
        print('%s-%d' % (i, zipcode.get(city).get(i)))


def area_to_zip(area):
    k = 0
    for i in zipcode:
        if zipcode.get(i).get(area, '無資料') != '無資料':
            print('您找的郵遞區號:%s-%s-%s' % (i, area, zipcode.get(i).get(area)))
            k = k + 1
    if k == 0:
        print('此區域無對應郵遞區號。')


def zip_to_area(zip):
    k = 0
    for i in zipcode:
        for j in zipcode.get(i):
            if zip == zipcode.get(i).get(j):
                print('「%d」為%s「%s」的郵遞區號。' % (zip, i, j))
                k = k + 1
    if k == 0:
        print('郵遞區號無對應區域。')

keyinQ1 = ''
keyinQ2 = ''
while keyinQ1 != 'Q':
    keyinQ1 = input('1.列出城市所有郵遞區號\n2.用區域名稱或是郵遞區號搜尋\nQ.離開\n請輸入搜尋方式:')
    if keyinQ1 == '1':
        temp = zipcode.copy()
        templist = list(temp)
        templist.sort()
        questionstr = '請輸入您要找的城市('
        tempstr = ''
        for i in range(len(templist)):
            tempstr = tempstr + str(i + 1) + '.' + templist[i] + ' '
        questionstr = questionstr + tempstr + '):'
        while True:
            keyinQ2 = input(questionstr)
            try:
                keyinQ2 = int(keyinQ2) - 1
            except ValueError:
                print('請以代碼輸入。')
                continue
            if keyinQ2 in range(len(templist)):
                list_zip(templist[keyinQ2])
                break
            else:
                print('請輸城市代碼。')
    elif keyinQ1 == '2':
        keyinQ2 = input('請輸入區域名稱或是郵遞區號:')
        if keyinQ2.isdigit() is True:
            zip_to_area(int(keyinQ2))
        else:
            area_to_zip(keyinQ2)
    elif keyinQ1 == 'Q':
        print('感謝！')
    else:
        print('請重新輸入。')
