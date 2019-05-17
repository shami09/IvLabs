def computepay(hours,rate):
   
    if hours>40:
        reg=rate*hours
        otp=(hours-40.0)*(rate*.5)
        pay=reg+otp
    else:
        pay=hours*rate
   
    return pay
    

    

hrs = input("Enter Hours:")
rt=input("Enter rate:")
h=float(hrs)
r=float(rt)
pay=computepay(h,r)
print(pay)