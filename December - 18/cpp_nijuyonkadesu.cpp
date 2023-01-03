#include<iostream>
#include<vector>
#include<cctype>
#include<climits>

using namespace std;

int NO_PARENTS = -1; // Flag to indicate a node does not have a parent node

void dijkstras(vector<vector<int>>& adjMat, int start);

int main() {
    vector<vector<int>> adjMat{
      /*  P   Q   R   S   T   U   V   W   */
        { 0,  3,  4,  5,  0,  0,  0,  0},
        { 3,  0,  2,  0,  0,  5,  0,  0},
        { 4,  2,  0,  7,  3,  6,  2,  0},
        { 5,  0,  7,  0,  2,  0,  0,  0},
        { 0,  0,  3,  2,  0,  0,  4,  0},
        { 0,  5,  6,  0,  0,  0,  5,  2},
        { 0,  0,  2,  0,  4,  5,  0,  1},
        { 0,  0,  0,  0,  0,  2,  1,  0}
    };

    // Choice input an alphabet p = 112 in ascii
    char charChoice;
    cin >> charChoice;
    charChoice = tolower(charChoice);
    int ch = charChoice - 112;
    cout<<ch;

    // To find shortest distance from ch to W
    dijkstras(adjMat, ch);
}

void dijkstras(vector<vector<int>>& adjMat, int start){

    int n = adjMat[0].size(); // No of nodes in the given graph

    vector<bool> isNodeAdded(n, false); // Tells if a node is added to the shortest path tree

    vector<int> allPathShortestDistance(n, INT_MAX); // This is where the shortest possible length is stored
    allPathShortestDistance[start] = 0; // start node is 0 acc. to algorithm
    
    vector<int> parentOfNode(n); // keep track of a node's parent node
    parentOfNode[start] = NO_PARENTS;

    // Begin to find shortest distance of every node from start
    for (int i=1; i<n; i++){

        int currentNode= -1; 
        int currentNodeWeight = INT_MAX;

        // Selection of next node
        for (int node=0; node < n; node++){
            // Execution of this loop for the first time, only the start node satisfies the condition
            if(isNodeAdded[node] == false && allPathShortestDistance[node] < currentNodeWeight) {
                currentNode = node;
                currentNodeWeight = allPathShortestDistance[currentNode];
            }
        }

        // add node to current solution (visited)
        isNodeAdded[currentNode] = true;

        for (int nextNode = 0; nextNode < n; nextNode++){
            int nextNodeWeight = adjMat[currentNode][nextNode]; // example: node (P) --- w ---- currentNode (Q)
                                                                
            // valid edge and new weight should be less than previously recorded weight  
            if((nextNodeWeight > 0) && ((currentNodeWeight + nextNodeWeight) < allPathShortestDistance[nextNode])){
                parentOfNode[nextNode] = currentNode;
                allPathShortestDistance[nextNode] = currentNodeWeight + nextNodeWeight;
            }
        }
    }
}
