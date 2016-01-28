#-*-coding:UTF-8 -*-
# 類別作業練習 EX05_hw.py
#
# 測試資料 http://140.112.31.82/wordpress/?p=216

class student:

    def __init__(self, n, g):
        self.name = n
        self.gender = g
        self.grades = []

    def add(self,grade):
        self.grades = self.grades + [grade]

    def avg(self):
        total = 0
        j = 0
        for i in self.grades :
            total = total + i
            j = j + 1
        return total / j
        
    def fcount(self):
        count60 = 0
        for i in self.grades[:]:
            if i < 60:
                count60 += 1 
        return count60

s1 = student("Tom","M")
s2 = student("Jane","F")
s3 = student("John","M")
s4 = student("Ann","F")
s5 = student("Peter","M")
studentlist = [s1, s2, s3, s4, s5]
s1.add(80)
s1.add(90)
s1.add(55)
s1.add(77)
s1.add(40)
s2.add(58)
s2.add(87)
s3.add(100)
s3.add(80)
s4.add(40)
s4.add(55)
s5.add(60)
s5.add(60)

namelist = ''
j = 0
for i in studentlist:
    j += 1
    namelist = namelist + str(j) + '.' + i.name + ' '

