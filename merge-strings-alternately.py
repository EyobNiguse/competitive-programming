class Solution(object):
    def mergeAlternately(self, word1, word2):
        output = ''
        count = 0
        size = min(len(word1),len(word2))
        for x in range(size):
            output+=word1[x] + word2[x]
            count = x
        maxWord = ""
    
        if(len(word2)  < len(word1)):
            maxWord  = word1
        else:
            maxWord = word2
        if(count < len(maxWord)-1):
             for x in range(count+1, len(maxWord)):
                 output+=maxWord[x]
        return output  
