import urllib.request

response = urllib.request.urlopen('http://invoice.etax.nat.gov.tw')
temptext = response.read().decode('utf_8')
print(temptext)
