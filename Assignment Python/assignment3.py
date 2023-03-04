def factorial(n):
    fact=1
    if(n==0):
        fact=1
    elif(n>=1):
        for i in range (n,1,-1):
            fact=fact*i
    return fact

print(factorial(5))