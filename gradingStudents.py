#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    for x in range(len(grades)):
        temp_str  = str(grades[x])
        last_digit = int(temp_str[len(temp_str)-1])
        _temp = grades[x]
        if grades[x] >= 38:
            if(not(last_digit == 5 or last_digit == 0)):
                if(last_digit < 5 and  5 - last_digit < 3):
                    _temp = grades[x] + 5 - last_digit
                else:
                    if(last_digit < 10 and 10 - last_digit < 3):
                        _temp = grades[x] + 10 - last_digit 
        grades[x]= _temp
    return grades
                
    # Write your code here

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)
    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
