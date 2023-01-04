class Solution(object):
    def fizzBuzz(self, n):
        a = []
        x=1
        while(x <= n ):
            if(x % 3 == 0 and x % 5 ==0):
                a.append("FizzBuzz")
            else:
                if x % 3 == 0:
                    a.append("Fizz")
                else:
                    if x % 5 == 0:
                        a.append("Buzz")
                    else:
                        a.append(str(x))
            x = x + 1
        return a   
