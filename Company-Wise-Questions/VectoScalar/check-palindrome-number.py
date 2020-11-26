# check if a number is palindrome
num = int(input())

def isPalindrome(num):
    reverse = 0
    temp = num
    while(num>0):
        digit = num % 10
        reverse = reverse * 10 + digit
        num = num // 10
    if(temp == reverse):
        return True
    else:
        return False
print(isPalindrome(num))