#include<bits/stdc++.h>

using namespace std;
int NO_PARENTS = -1;

void dijkstras(vector<vector<int>>& adjMat, int start);
void printSolution(int start, vector<int>& allPathShortestDistance, vector<int>& parentOfNode); 
void printPath(int end, vector<int>& parentOfNode);

int main() {
    vector<vector<int>> adjMat{
        { 0,  3,  4,  5,  0,  0,  0,  0},
        { 3,  0,  2,  0,  0,  5,  0,  0},
        { 4,  2,  0,  7,  3,  6,  2,  0},
        { 5,  0,  7,  0,  2,  0,  0,  0},
        { 0,  0,  3,  2,  0,  0,  4,  0},
        { 0,  5,  6,  0,  0,  0,  5,  2},
        { 0,  0,  2,  0,  4,  5,  0,  1},
        { 0,  0,  0,  0,  0,  2,  1,  0}
    };

    char charChoice;
    cin >> charChoice;
    charChoice = tolower(charChoice);
    int ch = charChoice - 112;
    dijkstras(adjMat, ch);
}

void dijkstras(vector<vector<int>>& adjMat, int start){

    int n = adjMat[0].size(); 

    vector<bool> isNodeAdded(n, false);

    vector<int> allPathShortestDistance(n, INT_MAX); 
    allPathShortestDistance[start] = 0; 
    
    vector<int> parentOfNode(n); 
    parentOfNode[start] = NO_PARENTS;
    for (int i=1; i<n; i++){

        int currentNode= -1; 
        int currentNodeWeight = INT_MAX;

        for (int node=0; node < n; node++){
            
            if(isNodeAdded[node] == false && allPathShortestDistance[node] < currentNodeWeight) {
                currentNode = node;
                currentNodeWeight = allPathShortestDistance[currentNode];
            }
        }

        isNodeAdded[currentNode] = true;

        for (int nextNode = 0; nextNode < n; nextNode++){
            int nextNodeWeight = adjMat[currentNode][nextNode]; 
            if((nextNodeWeight > 0) && ((currentNodeWeight + nextNodeWeight) < allPathShortestDistance[nextNode])){
                parentOfNode[nextNode] = currentNode;
                allPathShortestDistance[nextNode] = currentNodeWeight + nextNodeWeight;
            }
        }
    }
    printSolution(start, allPathShortestDistance, parentOfNode);
}

void printSolution(int start, vector<int>& allPathShortestDistance, vector<int>& parentOfNode){
    int n = allPathShortestDistance.size();
    int end = 7; // W
    cout<<"Vertex\t Distance \t Path";
    cout<<"\n"<<((char)(start + 112))<<" -> ";
    cout<<((char)(end + 112))<<"\t   ";
    cout<<allPathShortestDistance[end]<<" hrs\t  ";
    printPath(end, parentOfNode);
}

void printPath(int node, vector<int>& parentOfNode){
    if(node == NO_PARENTS) return;
    printPath(parentOfNode[node], parentOfNode);
    cout<<(char)(node + 112)<<" ";
}
//input : P
