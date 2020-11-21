def countAndSay(n):
    output = '1'

    for _ in range(2, n+1):
        res = ''
        cur = output[0]
        count = 1
        for x in output[1:]:
            if x == cur:
                count += 1
            else:
                res += str(count) + cur
                count = 1
                cur = x

        res += str(count) + cur
        output = ''.join(res)

    return output

print(countAndSay(4))
