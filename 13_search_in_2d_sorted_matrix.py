def searchMatrix(mat: [[int]], target: int) -> bool:
    # Write your code here.
    m = len(mat)
    n  = len(mat[0])

    col = n - 1
    row = 0
    while(col >= 0 and row <= m-1):
        if mat[row][col] < target:
            row+=1
        elif mat[row][col] > target:
            col-=1
        elif mat[row][col] == target:
            return True        

    return False
