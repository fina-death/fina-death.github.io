#Q1
Mathematics = {'Tom', 'John', 'Mary', 'Jimmy', 'Sunny', 'Amy'}
English = {'John', 'Mary', 'Tony', 'Bob', 'Pony', 'Tom', 'Alice'} 
print('Q1 answer:')
print('數學及格但英文不及格:', Mathematics - English)
print('英文及格但數學不及格:', English - Mathematics) 
print('數學及英文都及格:', English & Mathematics) 
print('全班人數:', len(English | Mathematics), '+ 兩科都不及格的人數')

#Q2
HWScore = {'Tom' : [80, 100, 90, 95], 'John' : [100, 93, 75, 80]}
print('Q2 answer:')
print('Tom平均分數:', sum(HWScore['Tom']) / 4)
print('John平均分數:', sum(HWScore['John']) / 4)
