# pyhton version 3.8

def select_activities(s , f ):
    n = len(f)
    print ("The following activities are selected")
 
    # The first activity is always selected
    i = 0
    print ({s[i],f[i]}),
 
    # Consider rest of the activities
    for j in range(n):
 
        # If this activity has start time greater than
        # or equal to the finish time of previously
        # selected activity, then select it
        if s[j] >= f[i]:
            print ({s[j], f[j]}),
            i = j
 
# Driver program to test above function
n = int(input("Input the number of activities: "))
from array import*
s = array('i', []) 
f = array('i',[])
for i in range (n):
  start = int(input("Input the start time of your activities: "))
  duration = int(input("Input the duration  of your activities: "))
  finish= int(start) + int(duration)
  s.append(start)
  f.append(finish)

#bubble sort
for i in range(len(f)):
    for j in range(len(f)-i-1):
        if f[j]>f[j+1]:
            f[j],f[j+1],s[j],s[j+1]=f[j+1],f[j],s[j+1],s[j]
            
select_activities(s , f)