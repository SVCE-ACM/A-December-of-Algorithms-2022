//Question 18:
#include <bits/stdc++.h>

#define INT_MAX 10000000

using namespace std;

void DijkstrasTest(char a);

int main() {
  char a;
  cin >> a;
  DijkstrasTest(a);
  return 0;
}

class Node;
class Edge;

void Dijkstras();
vector<Node*>* AdjacentRemainingNodes(Node* node);
Node* ExtractSmallest(vector<Node*>& nodes);
int Distance(Node* node1, Node* node2);
bool Contains(vector<Node*>& nodes, Node* node);
void PrintShortestRouteTo(Node* destination);

vector<Node*> nodes;
vector<Edge*> edges;

class Node {
   public:
  Node(char id)
    : id(id), previous(NULL), distanceFromStart(INT_MAX) {
    nodes.push_back(this);
  }

   public:
  char id;
  Node* previous;
  int distanceFromStart;
};

class Edge {
   public:
  Edge(Node* node1, Node* node2, int distance)
    : node1(node1), node2(node2), distance(distance) {
    edges.push_back(this);
  }
  bool Connects(Node* node1, Node* node2) {
    return (
      (node1 == this->node1 &&
       node2 == this->node2) ||
      (node1 == this->node2 &&
       node2 == this->node1));
  }

   public:
  Node* node1;
  Node* node2;
  int distance;
};


void DijkstrasTest(char a) {
  Node* P = new Node('P');
  Node* Q = new Node('Q');
  Node* R = new Node('R');
  Node* S = new Node('S');
  Node* T = new Node('T');
  Node* U = new Node('U');
  Node* V = new Node('V');
  Node* W = new Node('W');

  Edge* e1 = new Edge(P, Q, 3);
  Edge* e2 = new Edge(Q, U, 5);
  Edge* e3 = new Edge(U, W, 2);
  Edge* e4 = new Edge(P, S, 5);
  Edge* e5 = new Edge(S, T, 2);
  Edge* e6 = new Edge(T, V, 4);
  Edge* e7 = new Edge(V, W, 1);
  Edge* e8 = new Edge(P, R, 4);
  Edge* e9 = new Edge(R, U, 6);
  Edge* e10 = new Edge(Q, R, 2);
  Edge* e11 = new Edge(S, R, 7);
  Edge* e12 = new Edge(R, T, 3);
  Edge* e13 = new Edge(R, V, 2);
  Edge* e14 = new Edge(U, V, 5);

  W->distanceFromStart = 0; 
  Dijkstras();
  if(a=='P')PrintShortestRouteTo(P);
  if(a=='Q')PrintShortestRouteTo(Q);
  if(a=='R')PrintShortestRouteTo(R);
  if(a=='S')PrintShortestRouteTo(S);
  if(a=='T')PrintShortestRouteTo(T);
  if(a=='U')PrintShortestRouteTo(U);
  if(a=='V')PrintShortestRouteTo(V);
  if(a=='W')PrintShortestRouteTo(W);
}

void Dijkstras() {
  while (nodes.size() > 0) {
    Node* smallest = ExtractSmallest(nodes);
    vector<Node*>* adjacentNodes =
      AdjacentRemainingNodes(smallest);

    const int size = adjacentNodes->size();
    for (int i = 0; i < size; ++i) {
      Node* adjacent = adjacentNodes->at(i);
      int distance = Distance(smallest, adjacent) +
               smallest->distanceFromStart;

      if (distance < adjacent->distanceFromStart) {
        adjacent->distanceFromStart = distance;
        adjacent->previous = smallest;
      }
    }
    delete adjacentNodes;
  }
}

Node* ExtractSmallest(vector<Node*>& nodes) {
  int size = nodes.size();
  if (size == 0) return NULL;
  int smallestPosition = 0;
  Node* smallest = nodes.at(0);
  for (int i = 1; i < size; ++i) {
    Node* current = nodes.at(i);
    if (current->distanceFromStart <
      smallest->distanceFromStart) {
      smallest = current;
      smallestPosition = i;
    }
  }
  nodes.erase(nodes.begin() + smallestPosition);
  return smallest;
}

vector<Node*>* AdjacentRemainingNodes(Node* node) {
  vector<Node*>* adjacentNodes = new vector<Node*>();
  const int size = edges.size();
  for (int i = 0; i < size; ++i) {
    Edge* edge = edges.at(i);
    Node* adjacent = NULL;
    if (edge->node1 == node) {
      adjacent = edge->node2;
    } else if (edge->node2 == node) {
      adjacent = edge->node1;
    }
    if (adjacent && Contains(nodes, adjacent)) {
      adjacentNodes->push_back(adjacent);
    }
  }
  return adjacentNodes;
}

int Distance(Node* node1, Node* node2) {
  const int size = edges.size();
  for (int i = 0; i < size; ++i) {
    Edge* edge = edges.at(i);
    if (edge->Connects(node1, node2)) {
      return edge->distance;
    }
  }
  return -1; 
}

bool Contains(vector<Node*>& nodes, Node* node) {
  const int size = nodes.size();
  for (int i = 0; i < size; ++i) {
    if (node == nodes.at(i)) {
      return true;
    }
  }
  return false;
}

void PrintShortestRouteTo(Node* destination) {
  Node* previous = destination;
  cout << "Shortest path: ";
  while (previous) {
    cout << previous-> id << " ";
    previous = previous->previous;
  }
  cout << endl;
  cout << "Shortest time: " << destination->distanceFromStart << " hours"<< endl;
}

void RemoveEdge(vector<Edge*>& edges, Edge* edge) {
  vector<Edge*>::iterator it;
  for (it = edges.begin(); it < edges.end(); ++it) {
    if (*it == edge) {
      edges.erase(it);
      return;
    }
  }
}
