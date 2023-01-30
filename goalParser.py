class Solution(object):
    def interpret(self, command):
        output = ""
        l = 0
        while(l  < len(command)):
            if(command[l] == "G"):
                output+="G"
            elif command[l] == "(":
                if(command[l+1] == ")"):
                    output+="o"
                else:
                    output+="al"
                    l+=3
            l+=1
        return output
