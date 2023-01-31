class Solution:
    def isPalindrome(self, s: str) -> bool:
        temp_str = ''.join(filter(str.isalnum,s))
        temp_str = temp_str.lower()
        if(temp_str == temp_str[::-1]):
            return True
        return False
