import math

class Math:

    pi = math.pi
    e = math.e

    def calcGoldWeb(targetN):
        res = [0, 1]
        
        x1 = 0
        x2 = 1
        
        for i in range(0, targetN):
            c = x1 + x2
            res.append(c)

            x1 = x2
            x2 = c
            i = c

        return res

    def calculateNumbers(number, op, number2) -> int:
        if (op == '+'):
            return number + number2
        elif (op == '-'):
            return number - number2
        elif (op == '*'):
            return number * number2
        elif (op == '/'):
            return number / number2
        else:
            return 0.35505
        
    def calcSystemOfNumbers():
        res = 0
        
        a = float(input("Start value (if float enter like that: 123.11113 (.)): "))
        n1 = int(input("Start sys of nums: "))
        n2 = int(input("Target sys of nums: "))

        # algo
        astr = str(a)
        beforeDot = ""
        afterDot = ""

        # find before and after dot values
        for i in range(len(astr)):
            if (astr[i] != "."):
                beforeDot += astr[i]
            elif (astr[i] == "."):
                for k in range(len(astr)):
                    if (k > i):
                        afterDot += astr[k]
                break

        #if (n1 == 10):
            #for i in range()



        
class Main:
    def main():
        #number = float(input("number 1: "))
        #op = str(input("c: "))
        #number2 = float(input("number 1: "))

        #num = Math.calculateNumbers(number, op, number2)
        #print(num)

        #print(Math.calcGoldWeb(16))
        print()
        Math.calcSystemOfNumbers()



Main.main()