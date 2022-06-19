import math
import numpy as np
import pandas as pd
from random import randint

#1個目のパーセプトロン
def z1(x1,x2):
    x=np.array([x1,x2])
    w=np.array([-2,3])
    v=-1
    u=np.sum(w*x)-v
    if u<0:
        return 0
    else:
        return 1

#2個目のパーセプトロン
def z2(x1,x2):
    x=np.array([x1,x2])
    w=np.array([-2,1])
    v=0.5
    u=np.sum(w*x)-v
    if u<0:
        return 0
    else:
        return 1

#学習によって完成する
def z3(x1,x2,w13,w23):
    x=np.array([z1(x1,x2),z2(x1,x2)])
    w=np.array([w13,w23])
    v=-1
    u=np.sum(w*x)-v
    if u<0:
        return 0
    else:
        return 1

#XOR(XORの教師データ)
def XOR(x1,x2):
    x=np.array([z1(x1,x2),z2(x1,x2)])
    w=np.array([-2,3])
    v=-1
    u=np.sum(w*x)-v
    if u<0:
        return 0
    else:
        return 1

#学習定数
e=0.001
#重みの初期値
w13=randint(-10,10)
w23=randint(-10,10)
#誤差の初期値
E1=1
E2=1
E3=1
E4=1
while (E1!=0) or (E2!=0) or (E3!=0) or (E4!=0):

    E1=z3(0,0,w13,w23)-XOR(0,0)
    w13=w13-e*E1*z1(0,0)
    w23=w23-e*E1*z2(0,0)

    E2=z3(1,0,w13,w23)-XOR(1,0)
    w13=w13-e*E2*z1(1,0)
    w23=w23-e*E2*z2(1,0)

    E3=z3(0,1,w13,w23)-XOR(0,1)
    w13=w13-e*E3*z1(0,1)
    w23=w23-e*E3*z2(0,1)

    E4=z3(1,1,w13,w23)-XOR(1,1)
    w13=w13-e*E4*z1(1,1)
    w23=w23-e*E4*z2(1,1)

z3_data = pd.Series({"(x1,x2)=(0,0)": z3(0,0,w13,w23), "(x1,x2)=(1,0)": z3(1,0,w13,w23), "(x1,x2)=(0,1)":z3(0,1,w13,w23),"(x1,x2)=(1,1)": z3(1,1,w13,w23)})

data = pd.DataFrame({"z3":z3_data})
data