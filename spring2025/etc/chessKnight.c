#include <stdio.h>
#include <stdbool.h>

#define SIZE 8

typedef struct {
    int x, y, steps;
} Node;

int knight_distance(int src, int dest) {
    if (src == dest) return 0;

    int moves[8][2] = {
        {-2, -1}, {-2, +1}, {-1, -2}, {-1, +2},
        {+1, -2}, {+1, +2}, {+2, -1}, {+2, +1}
    };

    bool visited[8][8] = {false};
    Node queue[64];
    int front = 0, rear = 0;

    int x_start = src / 8;
    int y_start = src % 8;
    int x_end = dest / 8;
    int y_end = dest % 8;

    queue[rear++] = (Node){x_start, y_start, 0};
    visited[x_start][y_start] = true;

    while (front < rear) {
        Node curr = queue[front++];

        if (curr.x == x_end && curr.y == y_end)
            return curr.steps;

        for (int i = 0; i < 8; i++) {
            int nx = curr.x + moves[i][0];
            int ny = curr.y + moves[i][1];

            if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                queue[rear++] = (Node){nx, ny, curr.steps + 1};
            }
        }
    }

    return -1;
}

int main() {
    int start, destin;
    printf("Enter the knight starting point and destination: ");
    scanf("%d %d", &start, &destin);
    printf("Distance = %d\n", knight_distance(start, destin));
    return 0;
}
