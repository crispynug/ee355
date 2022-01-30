import re

#checks if palindrome from txt file
def is_palindrome(file_name):


   #get string from file
   f = open(file_name,'r')
   string = f.read()
   f.close()
   
   #make lowercase, and filer non-alphamumeric
   pali = re.sub('[^A-Za-z0-9]+', '', string.lower())
   
   #check if palindrome
   length = len(pali)
   for i in range(length//2):
      if(pali[i] != pali[length - 1 -i]):
         print("No")
         break;
   else: #if for loop executes through, yes
      print("Yes")


is_palindrome("in.txt")




