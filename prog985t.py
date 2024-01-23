import numpy as np

def MergeSort(A):
  if length(A) > 1:
    arr = np.array_split(A, 2)
    L = arr[0]
    R = arr[1]
    MergeSort(L)
    MergeSort(R)
    Merge(A, L, R)
  

def Merge(A, L, R):
  i = 0 # Index for left subarray
  j = 0 # Index for right subarray
  k = 0 # Index for merged array
  while i < length(L) and j < length(R):
    if L[i] < R[j]:
      A[k] = L[i]
      i = i + 1
    else:
      A[k] = R[j]
      j = j + 1
      
    k = k + 1

  while i < length(L): # Copy remaining elements of L
    A[k] = L[i]
    i = i + 1
    k = k + 1

  while j < length(R): # Copy remaining elements of R
    A[k] = R[j]
    j = j + 1
    k = k + 1
