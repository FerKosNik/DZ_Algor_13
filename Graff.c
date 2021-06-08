#include <stdio.h>

const int n = 6;
int matrix[6][6] = {
      {0, 1, 1, 0, 0, 0},
      {0, 0, 0, 1, 1, 1},
      {1, 0, 0, 0, 0, 0},
      {0, 1, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 1, 0}
};

int visited[6] = {0};

void depthTravers(int st){
  int r;
  printf("%d", st);
  visited[st] = 1;
  for (r = 0; r < n; r++) {
    if (matrix[st][r] == 1 && !visited[r]){
      depthTravers(r);
    }
  }
};

void ressetArray(){
  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }
};

int main(int argc, char const *argv[]) {
  depthTravers(0);
  ressetArray();
  printf("\n");
  depthTravers(2);
  ressetArray();
  printf("\n");
  depthTravers(1);
  ressetArray();
  printf("\n");
  return 0;
}
