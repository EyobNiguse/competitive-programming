class Solution(object):
    def freqAlphabets(self, s):
        l = 0
        r = 0
        temp_dict = {}
        count = 1
        for x in range(97, 107):
            temp_dict[str(count)] = chr(x)
            count+=1
        count = 10
        for x in range(106,123):
            el = str(count) + '#'
            temp_dict[el] = chr(x)
            count+=1 
        temp_out  = []
        l = 0
        r = 0
        while(l <  len(s)):
            while(r < len(s) and not s[r] == '#'):
                r+=1
            print(r)
            if r < len(s) and s[r] == '#':
                temp_str = ''
                while(l < r -2):
                    temp_out.append(temp_dict[s[l]])
                    l+=1
                while(l <= r):
                    temp_str+=s[l]
                    l+=1
                if not (temp_str=='' ):
                    temp_out.append(temp_dict[temp_str])
                r+=1
            elif r == len(s):
                while(l < len(s)):
                    temp_out.append(temp_dict[s[l]])
                    l+=1

        return ''.join(temp_out)
