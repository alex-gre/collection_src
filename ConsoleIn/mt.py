import math


class Calc:
       Pi = math.pi

       def scircle(self,Pi,r):
              
              self.r = r
              return (Pi*(self.r**2))
       
       def sum(self,a: int, b: int) -> int:
              self.a = a
              self.b = b
              return (self.a + self.b)

       def sub(self,a: int, b: int) -> int:
              self.a = a
              self.b = b
              return (self.a  - self.b)       

       
       def mul(self,a: int, b: int) -> int:
              self.a = a
              self.b = b
              return (self.a  * self.b)
              
       def div(self,a: int, b: int) -> int:
              try:
                     self.a = a
                     self.b = b
                     return (self.a  / self.b)       
              except ZeroDivisionError as e:
                     print(e)
       
       def square_p(self,a: int, b: int) -> int:
              
              self.a = a
              self.b = b
              return (self.a  * self.b)
      
                     
              
if __name__ == '__main__':
       '''==== Main ===='''

       c1 = Calc()
       
       a=int(input('input digit a: '))
       b=int(input('input digit b: '))
       print(f'Sum = {c1.sum(a,b)}')
       print(f'Sub = {c1.sub(a,b)}')
       print(f'Mul = {c1.mul(a,b)}')
       print(f'Div = {c1.div(a,b)}')
       print(f'Pi = {c1.Pi}')
      
