arraynum1 = [1,2,3,4,120]
arraynum2 = [1,2,4,6,7,10,150]
arraytest = [0,1,2,3,4,5,6,7]

#design code
#binary search single array
def binary_search(array,number,start,end): #finds numbers in array that are less or equal to number
	if(start > end):
		return start;
	else:
		mid =start +((end-start)//2)
		if(number <  array[mid]):
			return binary_search(array,number, start, mid-1)		

		elif(number>=array[mid]):	
			return binary_search(array,number,mid+1,end)
	
#main function for finding medain
def find_median(array1,array2): #puts two sorted array in one large array then finds median
	length1 = len(array1)
	length2 = len(array2)
	arrayt = [] #large array
	array2_tracker = 0;#tracks index in array2 for appending 
	for x in range(length1):
		y = binary_search(array2,array1[x],array2_tracker,length2-1)#find all elements in array2 that are less than the current element in array1
		for i in range(array2_tracker,y):#append corresponding elements to total array
			arrayt.append(array2[i])
		arrayt.append(array1[x])
		array2_tracker = y
	if(array2_tracker < length2):#if left, append remaining elements of array2
		for i in range(array2_tracker,length2):
			arrayt.append(array2[i])
	if((length1 + length2)%2 == 0):#even median calc
		median =(arrayt[(length1 + length2)//2] + arrayt[((length1 + length2)//2)-1])/2.
		
	else:#odd median calc
		median = arrayt[(length1+length2)//2]
	return median;

#testing code
def test_arrays():#tests median function with various different arrays
	arraynum1 = [1,2,3,4,5,6,7,8,9]
	arraynum2 = [10,11,12,13,14,15,16]
	cmedian = find_median(arraynum1,arraynum2)
	print('test1: expected median: 8.5  calculated meadian: ',cmedian)
	arraynum1 = [1,5,7]
	arraynum2 = [-5,0,10,160]
	cmedian = find_median(arraynum1,arraynum2)
	print('test2: expected median: 5  calculated meadian: ',cmedian)
	arraynum1 = [10,10,10,10]
	arraynum2 = [1,2,3,4,5]
	cmedian = find_median(arraynum1, arraynum2)
	print('test3: expected median: 5  calculated meadian: ',cmedian)
	arraynum1 = [1,1,2,2,3,3,4,4,5,5]
	arraynum2 = [2,2,3,3,4,4,5,5,6,6]
	cmedian = find_median(arraynum1, arraynum2)
	print("test4: expected median: 3.5  calculated meadian: ",cmedian)

test_arrays()



