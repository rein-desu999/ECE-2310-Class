#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Coord {
    int x;
    int y;
};

vector<Coord> findPath(const vector<vector<int>>& grid, Coord src, Coord dst) {
    // Check if source and destination are valid
    if (grid.empty() || grid[0].empty() || 
        src.x < 0 || src.x >= grid.size() || src.y < 0 || src.y >= grid[0].size() ||
        dst.x < 0 || dst.x >= grid.size() || dst.y < 0 || dst.y >= grid[0].size() ||
        grid[src.x][src.y] != 0 || grid[dst.x][dst.y] != 0) {
        return {};
    }

    // Directions: left, right, down, up
    const Coord directions[] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    const int rows = grid.size();
    const int cols = grid[0].size();

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    vector<vector<Coord>> parent(rows, vector<Coord>(cols, {-1,-1}));

    queue<Coord> q;
    q.push(src);
    visited[src.x][src.y] = true;

    while (!q.empty()) {
        Coord current = q.front();
        q.pop();

        // Check if reached destination
        if (current.x == dst.x && current.y == dst.y) {
            // Reconstruct path
            vector<Coord> path;
            Coord at = dst;
            while (at.x != -1 && at.y != -1) {
                path.push_back(at);
                at = parent[at.x][at.y];
            }
            // Reverse the path
            for (int i = 0, j = path.size()-1; i < j; i++, j--) {
                Coord temp = path[i];
                path[i] = path[j];
                path[j] = temp;
            }
            return path;
        }

        // Explore neighbors
        for (const Coord& dir : directions) {
            int nx = current.x + dir.x;
            int ny = current.y + dir.y;

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && 
                !visited[nx][ny] && grid[nx][ny] == 0) {
                visited[nx][ny] = true;
                parent[nx][ny] = current;
                q.push({nx, ny});
            }
        }
    }

    return {}; // No path found
}

int main() {
    std::vector<std::vector<int>> grid = {
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 1, 1, 0}
    };

    vector<Coord> path = findPath(grid, {0,0}, {3,3});

    for (const Coord& p : path) {
        cout << "(" << p.x << "," << p.y << ") ";
    }
    return 0;
}