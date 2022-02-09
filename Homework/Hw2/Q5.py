
# NOTE: Run in python3 in order for current input to work, to run in python 2.7, raw_input is needed instead
#get input string
inputstring = input("Enter String: ")


#set up lists for tracking
unique_letters = [] #stores all unique letters
repeat = [] #tracks number of uniqye letters in string



#count how many times each letter is in string
for i in range(len(inputstring)):
   for j in range(len(unique_letters)):
      if (unique_letters[j] == inputstring[i]):
         repeat[j] += 1
         break
   else:
     unique_letters.append(inputstring[i])
     repeat.append(1)
     
     
#append through list to find max string
max_rep  = 0
loc = []
for i in range(len(repeat)):
   if(repeat[i] > max_rep):
      max_rep = repeat[i]
      loc = [i]
   elif(repeat[i] == max_rep):
      loc.append(i)

#print out max character(s)      
print("Most Repeated Character(s):")
for i in range(len(loc)):
   print("%c,%d" %(unique_letters[loc[i]],max_rep))
  
   
