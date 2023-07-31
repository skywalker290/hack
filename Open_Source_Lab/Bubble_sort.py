

def bub_sort(A):
    for i in range(len(A)):
        for j in range(i,len(A)):
            if(A[i]>A[j]):
                A[i] ,A[j] =A[j],A[i]

def selection_sort(A):
    m1=1e9;
    m2=0;

    for i in range(len(A)):
        for j in range(i,len(A)):
            if(A[j]<m1):
                m1=A[j];
                m2=j;
            
        A[i],A[m2]=A[m2],A[i]
        m1=1e9
        m2=i;


def insertion_sort(A):
    for i in range(len(A)):
        temp=A[i];
        for j in range(i,len(A))


data=[2,5,1,53,64,32,10,11,24]

bub_sort(data);
print(data);
selection_sort(data);
print(data);
