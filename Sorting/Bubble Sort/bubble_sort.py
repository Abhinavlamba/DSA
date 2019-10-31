# Time Complexity : O(n^2)
# Space Complexity : O(1)

def bubble_sort(a):
    ''' Sorts the given array in ascending order '''
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if a[i] > a[j]:
                a[i],a[j] = a[j],a[i]

if __name__ == '__main__':
    a = [3,1,2,-1,0]
    bubble_sort(a)
    assert a == [-1,0,1,2,3]
    #Why should I use this.
    #Because I know merge sort.


