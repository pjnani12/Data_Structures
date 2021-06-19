# https://www.careercup.com/question?id=5750442676453376
tmp=[]
    nMax=0
    for i in forwardRouteList:
        for j in returnRouteList:
            dist=i[1]+j[1]
            if dist <= maxTravelDist:
                tmp.append((i[0],j[0],dist))
                if dist>nMax:
                    nMax=dist
    
    route_list=[]
    for i in range(0,len(tmp)):
        if tmp[i][2]==nMax:
            route_list.append([tmp[i][0],tmp[i][1]])
    
    return route_list;
