class Solution(object):
    
    def longestCommonPrefix(self, strs):
        
        maxLen = 0
        string_out = []
        for x in strs:
            maxLen = max(maxLen,len(x))
        for x in range(maxLen):
            count = 0
            amountOfx = 0
            temp_char =   strs[count][x] if x < len(strs[count]) else "" 
            while( count < len(strs) and x < len(strs[count])):
                if(strs[count][x] == temp_char):
                    amountOfx+=1
                count+=1
            if(amountOfx  == len(strs)):              
                string_out.append(temp_char)
            else:
                return ''.join(string_out)       
        return ''.join(string_out)   
