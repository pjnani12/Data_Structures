//https://studyhelpme.com/question/26416/Amazon-Fresh-is-a-grocery-delivery-service-that-offers-consumers-the-option-of-purchasing-their-groc

def isPath(arr):
    arr_dir = [ [0, 1], [0, -1], [1, 0], [-1, 0]]
    queue = []
    distance = []
    queue.append((0, 0))
    distance.append(0)
    while(len(queue) > 0):
        p = queue[0]
        queue.pop(0)
        if(arr[p[0]][p[1]] == 9):
            return distance[0]
        # mark as visited
        arr[p[0]][p[1]] = 0
            
        # check all four directions
        for i in range(4):
            x = p[0] + arr_dir[i][0]
            y = p[1] + arr_dir[i][1]
            
            if(x >= 0 and y >= 0 and x < len(arr) and y < len(arr[0]) and arr[x][y] != 0):        
                queue.append((x, y))
                distance.append(distance[0]+1)
        distance.pop(0)

    return -1

# Given array
arr = [ [ 1, 1, 1, 0, 0 ],
        [ 1, 0, 1, 0, 0 ],
        [ 1, 0, 1, 0, 0 ],
        [ 1, 0, 0, 0, 0 ],
        [ 1, 0, 0, 0, 0 ],
        [ 1, 9, 0, 0, 0 ] ]


dist = isPath(arr)
print(dist)
