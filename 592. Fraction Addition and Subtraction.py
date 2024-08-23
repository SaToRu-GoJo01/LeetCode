class Solution:
    def fractionAddition(self, expression: str) -> str:
        nume = 0
        demo = 1
        n = len(expression)
        i = 0

        while i < n:
            negative = False

            if expression[i] == '-':
                negative = True
            
            if expression[i] in "-+":
                i+= 1
            
            currNume = 0
            currDemo = 0
            # curr numerator
            while i < n and expression[i].isdigit():
                currNume = currNume*10 + int(expression[i])
                i+=1

            # if numerator is negative
            if negative:
                currNume *= -1
            
            # skipping slash '/'
            i+=1

            # curr denominator
            while i<n and expression[i].isdigit():
                currDemo = currDemo*10 + int(expression[i])
                i+=1

            # parsing expression till now
            nume = nume*currDemo + currNume*demo
            demo *= currDemo
        
        # calculating gcd to get the highest common divisor for numerator and denominator, so that we can get simplest form.
        GCD = abs(math.gcd(nume,demo))
        nume //= GCD
        demo //= GCD

        return f"{nume}/{demo}"
