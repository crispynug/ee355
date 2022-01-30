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
   start = 0
   end = len(pali)-1
   flag = 0; #flag set to 1 after 1 letter is "deleted"
   while(start < end):
      if(pali[start] != pali[end]):
         if(flag):
            print("No")
            break;
         elif(pali[start] == pali[end-1]):
            flag = end
            start+=1;
            end-=2;
         elif(pali[start+1] == pali[end]):
            flag=start;
            start+=2;
            end-=1;
         else:
            print("No")
            break;
      else:
         start+= 1
         end-= 1
   else: #if for loop executes through, yes
      if(flag):
         print("Yes, delete " , pali[flag], "at position " ,flag)
      else:
         print("Yes")


is_palindrome("in.txt")




