class Solution(object):
    def isAlienSorted(self, words, order):
        temp_dict = {}
        output = []
        for x in range(len(order)):
            temp_dict[order[x]] = x 
        for x in range(1,len(words)):
            word1 = words[x-1]
            word2 = words[x]
            for y in range(len(word1)):
                print(y)
                if y >= len(word2):
                    return False
                if(temp_dict[word1[y]] < temp_dict[word2[y]]):
                    break
                if( temp_dict[word1[y]] > temp_dict[word2[y]]):
                    return False
                
        return True     
