#include <fstream>
#include <iostream>

using namespace std;

const int POINTS_PER_LINE = 3;

struct Point {
  int x;
  int y;

  Point(ifstream *input) { *input >> x >> y; }
};

struct Vector {
  int x;
  int y;

  Vector(Point *a, Point *b) {
    x = a->x - b->x;
    y = a->y - b->y;
  }
};

Point *parse_line(ifstream input);

int main() {
  ifstream input("input.txt");
  int num_of_tests;

  input >> num_of_tests;

  for (int i = 0; i < num_of_tests; i++) {
    Point points[POINTS_PER_LINE]{{&input}, {&input}, {&input}};
    Vector vectors[POINTS_PER_LINE - 1]{{&points[0], &points[1]},
                                        {&points[1], &points[2]}};

    if (not(vectors[0].x * vectors[1].y - vectors[0].y * vectors[1].x)) {
      cout << "TAK" << endl;
    } else {
      cout << "NIE" << endl;
    }
  }
}
