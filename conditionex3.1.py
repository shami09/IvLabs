hrs = input("Enter Hours:")
h = float(hrs)
rate=input("Enter Rate:")
r=float(rate)
if h > 40:
    
    nom=h*r
    ep=(h-40)*(r*0.5)
    
    pay=nom+ep
else:
    
    pay=h*r
print("Pay:",pay)