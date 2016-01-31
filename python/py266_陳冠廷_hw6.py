while True:
    try:
        file1 = open('stores_old.csv', 'r')
    except FileNotFoundError:
        print('File [stores_old.csv] can\'t be found.')
        break
    file2 = open('stores_new.csv', 'w')
    print('Writing File...')
    while True:
        temp = file1.readline().split(',')
        answer = temp[0]
        for i in range(0, len(temp)):
            if i in [3, 5, 6]:
                answer += ',' + temp[i]
        if temp == ['']:
            file1.close()
            file2.close()
            break
        file2.write(answer + '\n')
    print('Finished.')
    break
