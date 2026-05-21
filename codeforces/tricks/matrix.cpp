

/* Directions for left, right, top, bottom */
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

/* Directions for 4 diagonals */
int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};

/* Diagonals included */
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

/* Example usecase: */
int i = 2;
int newX = x + dx[i];
int newY = y + dy[i];

