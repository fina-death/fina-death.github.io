print('以下為作業二, n*n乘法表')
while True:
	looptype = str(input('請問您要使用 1.for迴圈 2.while迴圈 Q.離開: '))
	if looptype == '1':
		matrixN = input('請輸入您需要n*n乘法表的n值: ')
		try:
			matrixN = int(matrixN)
		except ValueError:
			print('請輸入數字')
			continue
		for i in range(1, matrixN + 1):
			functionstr = ''
			for j in range(1, matrixN + 1):
				functionstr = functionstr + '[%3sx%3s = %4s]' % (str(i), str(j), str(i * j))
				if j % 10 == 0:
					print(functionstr)
					functionstr = ''
			if j % 10 != 0:
				print(functionstr)
	elif looptype == '2':
		matrixN = input('請輸入您需要n*n乘法表的n值: ')
		try:
			matrixN = int(matrixN)
		except ValueError:
			print('請輸入數字')
			continue
		i = 1
		while i <= matrixN:
			functionstr = ''
			j = 1
			while j <= matrixN:
				functionstr = functionstr + '[%3sx%3s = %4s]' % (str(i), str(j), str(i * j))
				if j % 10 == 0:
					print(functionstr)
					functionstr = ''
				j += 1
			if (j - 1) % 10 != 0:
				print(functionstr)
			i += 1
	elif looptype == 'Q':
		break
	else:
		print('請重新執行')
