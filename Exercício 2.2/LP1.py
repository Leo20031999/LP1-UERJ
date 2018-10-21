def ler():
    n1=int(raw_input("Digite um numero: "))
    n2=int(raw_input("Digite um numero: "))
    return n1,n2
def impr(n1,n2):
    if(n1<n2):
        for i in range(n1+1,n2):
            print i,
    if(n2<n1):
        for i in range(n2+1,n1):
            print i,
    if(n1==n2):
        print "Valores iguais"
    return
n1,n2=ler()
impr(n1,n2)
