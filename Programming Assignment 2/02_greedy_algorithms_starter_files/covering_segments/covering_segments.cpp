#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;

struct Segment {
  int start, end;
};

bool segmentComparator(Segment a , Segment b) {
  return a.end < b.end;
}

vector<int> optimal_points(vector<Segment> &segments) {
  vector<int> points;
  //write your code here
std::sort(segments.begin(), segments.end(), segmentComparator);

  int endIndex = segments[0].end;
  for (size_t i = 1; i < segments.size(); ++i) {
    if (segments[i].start > endIndex) {
      points.push_back(endIndex);
      endIndex = segments[i].end;
    }
    else {
      if (segments[i].end < endIndex)
      endIndex = segments[i].end;
    }
    //points.push_back(segments[i].start);
    //points.push_back(segments[i].end);
  }
  points.push_back(endIndex);
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
