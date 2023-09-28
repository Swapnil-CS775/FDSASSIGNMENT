#Assignment 1:DS LAB
#Write a python program to store marks of N student in fundamentals of data stracture and calculate : Avg score of class ,highest and lowest score ,count absent student ,display marks with highest frequency.

n=input("Enter total number of student in the class:")
n=int (n)
a=[]

for i in range(n):
	ele=input("Enter a marks of student:")
	ele=int(ele)
	a.append(ele)
print("Marks of student is:")
for i in range(n):
	print(a[i])
	
#THIS IS FOR COUNTING ABSENT STUDENT 

c=0
for i in range(n):
	if (a[i]==-1):
		c=c+1
		
print("NO OF ABSENT STUDENT IS:",c)

#THIS IS FOR CALCULATING AVERAGE

sum=0
for i in range(n):
	if(a[i]!=-1):
		sum=sum+a[i]
avg=sum/n
print("Average marks is:",avg)

#THIS IS FOR MAX AND MIN MARKS

min=100
for i in range(n):
	if(a[i]!=-1 and a[i]<min):
		min=a[i]
print("Minimum marks of student is:",min)

max=-1
for i in range(n):
	if(a[i]!=-1 and a[i]>max):
		max=a[i]

print("Maximum marks of student is:",max)
		

#THIS IS FOR HIGHEST FREQUENCY

fr={}
for i in a:
	if i in a:
		if(i in fr):
			fr[i]=fr[i]+1
		else:
			fr[i]=1
print("Following are frequencies of given marks")
for i,j in fr.items():
	print(i,j)





















		
		
	
