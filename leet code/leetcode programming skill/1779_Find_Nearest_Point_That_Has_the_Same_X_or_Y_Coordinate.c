   int smallestsum = INT_MAX;
    int smallestindex = -1;
    int absx, absy = 0;

    for (int i = 0; i < pointsSize; i++) {

        if (points[i][0] == x || points[i][1] == y) {

            absx = points[i][0] - x;
            absy = points[i][1] - y;
            absx < 0 ? absx *= -1 : NULL;
            absy < 0 ? absy *= -1 : NULL;


            if (absx + absy < smallestsum) {
                smallestindex = i;
                smallestsum = absx + absy;
            }
        }
    }
    return smallestindex;
