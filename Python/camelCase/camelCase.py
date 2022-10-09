import os

dirList = os.listdir("/tmp/p")
underScoreFiles = []
for i in dirList:
	if '_' in i:
		underScoreFiles.append(i)

firstWord = []
titleCase = []
for i in underScoreFiles:
	splitName = i.split("_")
	name = ""
	for i in splitName:
			name += i.title()
	titleCase.append(name)

camelCase = []	
for i in titleCase:
	iniUpper = i[0][0]
	iniLower = iniUpper.lower()
	camelCase.append(i.replace(iniUpper,iniLower,1))
for i in range(len(camelCase)):
	os.rename(underScoreFiles[i],camelCase[i])
