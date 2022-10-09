import os

print("Converting files with _ to camelCase ....")

dirList = os.listdir(os.getcwd())
## Store all the files in the folder to the variable
underScoreFiles = []
for i in dirList:
	if '_' in i: ## Adds the files with '_' to a list 
		underScoreFiles.append(i)

titleCase = []
for i in underScoreFiles:
	splitName = i.split("_") ## Splits the file names with _
	name = ""
	for i in splitName:
			name += i.title()
	titleCase.append(name) ##Convert all seperate words to Title case and add to a list

camelCase = []	
for i in titleCase:
	iniUpper = i[0][0]
	iniLower = iniUpper.lower()
	camelCase.append(i.replace(iniUpper,iniLower,1)) ##Convert the first letter from Upper to Lower case

for i in range(len(camelCase)):
	os.rename(underScoreFiles[0],camelCase[0]) ##Rename Everything

print("Succesfully converted everything :)")
