class Solution:
    def findDuplicate(self, paths: List[str]) -> List[List[str]]:
        temp_dict = {}
        output = []
        for  x in paths:
            temp = x.split(' ')
            for j in range(1,len(temp)):
                print(temp[j].split('(')[1])
                content = temp[j].split('(')[1].replace(')','')
                if content in temp_dict:
                    temp_dict[content].append([temp[0],temp[j].split('(')[0]])
                else:
                    temp_dict[content] = [[temp[0],temp[j].split('(')[0]]]

        for x in temp_dict:
            temp_out = []
            if len(temp_dict[x])>1:
                for y in temp_dict[x]:
                    temp_out.append('/'.join(y))
                output.append(temp_out)
        return(output)
