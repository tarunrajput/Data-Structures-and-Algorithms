def electrostatics(input1,input2,input3):
    totalCharge = 0
    for i in range(0,input3):
        if(input2[i]=='P'):
            totalCharge = totalCharge + input1[i]
        else:
            totalCharge = totalCharge - input1[i]
    return abs(totalCharge) * 100
