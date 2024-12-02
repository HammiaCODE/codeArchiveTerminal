#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <array>
#include <algorithm>

//CODES
#include "binarySearch.h"
#include "linearSearch.h"
#include "bubbleSort.h"
#include "mergeSort.h"
#include "selectionSort.h"
#include "quickSort.h"
#include "insertionSort.h"
#include "linkedList.h"
#include "queues.h"
#include "stacks.h"
#include "dijkstra.h"
#include "avlTree.h"
#include "BFS.h"
#include "DFS.h"

using namespace std;

int check;
string stringCheck;

int main() {

    cout << "------------------CODE ARCHIVE-----------------------"<<endl;
    cout << "MENU" << endl;

    cout << "1. SEARCH ALGORITHMS" << endl;
    cout << "2. SORTING ALGORITHMS" <<endl;
    cout << "3. LINEAR DATA STRUCTURE" << endl;
    cout << "4. NON LINEAR DATA STRUCTURE" << endl;
    cout << "5. EXIT ARCHIVE"<< endl;

    cout << "------------------------------------------------------------"<< endl;

    cout << "TYPE 'Y' TO ENTER ARCHIVES"<< endl;
    cout << "TYPE 'N' TO LEAVE" << endl;
    cout << "ENTER ARCHIVES: ";
    cin >> stringCheck;

    while (stringCheck=="Y"||stringCheck=="y") {
        cout << "TYPE THE NUMBER OF THE ARCHIVE YOU WANT TO VISIT."<<endl;
        cout << "VISIT: ";
        cin >> check;

        if (check==1) {
            cout << "1. LINEAR SEARCH"<<endl;
            cout << "2. BINARY SEARCH"<<endl;
            cout << "3. GO BACK" << endl;

            cout << "TYPE THE NUMBER OF THE OPTION YOU WANT TO VISIT."<<endl;
            cout << "VISIT: ";
            cin >> check;

            //LINEAR SEARCH
            if(check==1) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "LINEAR SEARCH"<< endl;
                linearSearchAlg lineSearch;

                vector<int> linearData;
                int linearSize;
                int linearVal;

                cout << "Size of the array: ";
                cin>>linearSize;

                for(int i =0;i<linearSize;i++) {
                    cout << "Type number: ";
                    cin >> linearVal;
                    linearData.push_back(linearVal);
                }

                int look;
                cout << "Search: ";
                cin >> look;

                int result = lineSearch.linearSearch(linearData,look);

                if(result==-1) {
                    cout << "Element not found :(" << endl;
                } else {
                    cout << "Element " << look << " found at index "<< result;
                    cout << endl;
                }
                cout << "------------------------------------------------------------"<<endl;

            }

            //BINARY SEARCH
            else if(check==2) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "BINARY SEARCH"<< endl;
                binarySearchAlg binary;

                vector<int> binaryData;
                int binarySize;
                int binaryVal;

                cout << "Size of the array: ";
                cin>>binarySize;

                for(int i =0;i<binarySize;i++) {
                    cout << "Type number: ";
                    cin >> binaryVal;
                    binaryData.push_back(binaryVal);
                }

                sort(binaryData.begin(), binaryData.end());

                int lookB;
                cout << "Search: ";
                cin >> lookB;

                int n=binaryData.size();

                int resultB = binary.binarySearch(binaryData, 0, n - 1, lookB);

                if(resultB==-1) {
                    cout << "Element not found!"<<endl;
                }else {
                    cout << "Element "<< lookB << " found at index "<< resultB;
                    cout << endl;
                }
                cout << "------------------------------------------------------------"<<endl;
            }

            //RETURN
            else if (check==3){
                cout << "Sending you back to the menu..." << endl;

            }else{
                cout <<"It seems that option isn't available, try again"<<endl;
                cout << "VISIT: ";
                cin >> check;
            }

        } else if (check==2) {
            cout << "1. BUBBLE SORT" << endl;
            cout << "2. SELECTION SORT" <<endl;
            cout << "3. INSERTION SORT" << endl;
            cout << "4. MERGE SORT" << endl;
            cout << "5. QUICK SORT"<< endl;
            cout << "6. GO BACK" << endl;

            cout << "TYPE THE NUMBER OF THE OPTION YOU WANT TO VISIT."<<endl;
            cout << "VISIT: ";
            cin >> check;

            //BUBBLE SORT
            if(check==1) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "BUBBLE SORT"<< endl;
                BubbleSortAlg bubblesorter;
                vector<int> bubble;
                int bubbleSize;
                int bubbleVal;

                cout << "Size of the array: ";
                cin>>bubbleSize;

                for(int i =0;i<bubbleSize;i++) {
                    cout << "Type number: ";
                    cin >> bubbleVal;
                    bubble.push_back(bubbleVal);
                }

                cout << "ORIGINAL ARRAY: ";
                for(int i=0;i<bubble.size();i++) {
                    cout << bubble[i] << " ";
                }
                cout << endl;

                bubblesorter.bubbleSort(bubble);

                cout << "ORDERED ARRAY: ";
                for(int i=0;i<bubble.size();i++) {
                    cout << bubble[i] << " ";
                }
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;
            }

            //SELECTION SORT
            else if(check==2) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "SELECTION SORT"<< endl;
                selectSortAlg selection;
                vector<int> selectData;
                int selectSize;
                int selectVal;

                cout << "Size of the array: ";
                cin>>selectSize;

                for(int i =0;i<selectSize;i++) {
                    cout << "Type number: ";
                    cin >> selectVal;
                    selectData.push_back(selectVal);
                }

                selection.selectionSort(selectData);

                cout <<"ORDERED ARRAY:";
                for(int num:selectData) {
                    cout << num << ",";
                }
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;
            }

            //INSERTION SORT
            else if(check==3) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "INSERTION SORT"<< endl;
                insertionSortAlg insertAlg;
                vector<int> insertAlgData;
                int insertAlgSize;
                int insertAlgVal;

                cout << "Size of the array: ";
                cin>>insertAlgSize;

                for(int i =0;i<insertAlgSize;i++) {
                    cout << "Type number: ";
                    cin >> insertAlgVal;
                    insertAlgData.push_back(insertAlgVal);
                }

                insertAlg.instertionSort(insertAlgData);
                cout <<"ORDERED ARRAY:";
                for(int num:insertAlgData) {
                    cout << num << ",";
                }
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;
            }

            //MERGE SORT
            else if(check==4) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "MERGE SORT"<< endl;
                mergeSortAlg merge;
                vector<int> mergeData;
                int mergeSize;
                int mergeVal;

                cout << "Size of the array: ";
                cin>>mergeSize;

                for(int i =0;i<mergeSize;i++) {
                    cout << "Type number: ";
                    cin >> mergeVal;
                    mergeData.push_back(mergeVal);
                }

                merge.mergeSort(mergeData);
                cout <<"ORDERED ARRAY:";
                for(int num:mergeData) {
                    cout << num << ",";
                }
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;
            }

            //QUICK SORT
            else if(check==5) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "QUICK SORT"<< endl;
                quickSortAlg quick;
                vector<int> quickData;
                int quickSize;
                int quickVal;

                cout << "Size of the array: ";
                cin>>quickSize;

                for(int i =0;i<quickSize;i++) {
                    cout << "Type number: ";
                    cin >> quickVal;
                    quickData.push_back(quickVal);
                }

                cout << "ORIGINAL ARRAY: ";
                for(int i=0;i<quickData.size();i++) {
                    cout << quickData[i] << " ";
                }
                cout << endl;

                quick.quickSort(quickData, (quickData.size()-1));

                cout << "ORDERED ARRAY: ";
                for(int i=0;i<quickData.size();i++) {
                    cout << quickData[i] << " ";
                }
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;
            }

            //RETURN
            else if(check==6) {
                cout << "Sending you back to the menu..." << endl;
            }else {
                cout <<"It seems that option isn't available, try again"<<endl;
                cout << "VISIT: ";
                cin >> check;
            }

        }else if (check==3) {
            cout << "1. STACKS" << endl;
            cout << "2. QUEUES" << endl;
            cout << "3. LINKED LISTS" << endl;
            cout << "4. GO BACK" << endl;

            cout << "TYPE THE NUMBER OF THE OPTION YOU WANT TO VISIT."<<endl;
            cout << "VISIT: ";
            cin >> check;

            //STACKS
            if(check==1) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "STACKS"<< endl;

                Stack stacks;

                int sizeS;
                int valS;
                cout << "STACK SIZE: ";
                cin >> sizeS;

                for(int i=0;i<sizeS;i++) {
                    cout << "ADD TO STACK: ";
                    cin>>valS;
                    stacks.push(valS);
                }

                cout << "FRONT ELEMENT IS " << stacks.top() << endl;
                string elim;
                cout << "ELIMMINATE AN ELEMENT OF THE STACK? (Y/N): ";
                cin >> elim;

                int numElim;

                if(elim=="Y"||elim=="y") {
                    stacks.pop();
                    cout << "NEW FRONT ELEMENT IS "<< stacks.top() << endl;
                }else {
                    cout << "NO CHANGES WERE MADE." << endl;
                }
                cout << endl;

                cout << "------------------------------------------------------------"<<endl;

            }

            //QUEUES
            else if(check==2) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "QUEUES"<< endl;

                int sizeQ;
                int valQ;
                cout << "QUEUE SIZE: ";
                cin >> sizeQ;

                Queue q(sizeQ);

                for(int i=0;i<sizeQ;i++) {
                    cout << "ADD TO QUEUE: ";
                    cin >> valQ;
                    q.enqueue(valQ);
                }

                cout << "FRONT ELEMENT IS " << q.peek() << endl;

                string elim;
                cout << "ELIMMINATE AN ELEMENT OF THE QUEUE? (Y/N): ";
                cin >> elim;

                int numElim;

                if(elim=="Y"||elim=="y") {
                    q.dequeue();
                    cout << "NEW FRONT ELEMENT IS "<< q.peek() << endl;
                }else {
                    cout << "NO CHANGES WERE MADE." << endl;
                }
                cout << endl;

                cout << "------------------------------------------------------------"<<endl;
            }

            //LINKED LISTS
            else if(check==3) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "LINKED LISTS"<< endl;

                Node* list = nullptr;

                cout << "LIST OF NUMBERS TO BE ADDED" << endl;
                cout << "20,100,40,2,6" << endl;

                addNode(list,20);
                addNode(list,100);
                addNode(list,40);
                addNode(list,2);
                addNode(list,6);

                cout << "LIST: ";
                showList(list);
                cout << endl;

                cout << "------------------------------------------------------------"<<endl;
            }

            //RETURN
            else if(check==4) {
                cout << "Sending you back to the menu..." << endl;
            }else {
                cout <<"It seems that option isn't available, try again"<<endl;
                cout << "VISIT: ";
                cin >> check;
            }

        }else if (check==4) {
            cout << "1. BINARY TREE AVL" << endl;
            cout << "2. DIJKSTRA" << endl;
            cout << "3. DFS" << endl;
            cout << "4. BFS" << endl;
            cout << "5. GO BACK" << endl;

            cout << "TYPE THE NUMBER OF THE OPTION YOU WANT TO VISIT."<<endl;
            cout << "VISIT: ";
            cin >> check;

            //AVL
            if(check==1) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "BINARY TREE AVL" << endl;

                AVLTree<int> avlStructure;

                int capacity;
                cout << "HOW MANY NODES WILL BE ADDED?: ";
                cin >> capacity;

                for (int i = 0; i < capacity; i++) {
                    int value;
                    cout << "INSERT: ";
                    cin >> value;
                    avlStructure.insert(value);
                }

                cout << "THE AVL TREE IS: " << endl;
                avlStructure.visualize();
                cout << endl;

                cout << "------------------------------------------------------------"<<endl;
            }

            //DIJKSTRA
            else if(check==2) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "DIJKSTRA"<< endl;
                int numNodes;
                cout << "NUMBER OF NODES: ";
                cin >> numNodes;

                vector<vector<pair<int, int>>> graph(numNodes);

                int edges;
                cout << "NUMBER OF EDGES: ";
                cin >> edges;

                cout << "ENTER THE EDGES IN THE FOLLOWING FORMAT: source destination weight" << endl;
                cout << "EXAMPLE: 'Edge 1: 0 1 2'" << endl;

                for (int i = 0; i < edges; i++) {
                    int src, dest, weight;
                    cout << "Edge " << i + 1 << ": ";
                    cin >> src >> dest >> weight;

                    graph[src].emplace_back(dest, weight);
                }

                int source;
                cout << "Enter the source node for Dijkstra's algorithm: ";
                cin >> source;

                try {
                    vector<int> distances = Dijkstra::dijkstra(numNodes, source, graph);

                    cout << "Shortest distances from node " << source << " are:" << endl;
                    for (int i = 0; i < numNodes; i++) {
                        if (distances[i] == Dijkstra::INF) {
                            cout << "NODE " << i << ": UNREACHABLE!!! :( " << endl;
                        } else {
                            cout << "NODE " << i << ": " << distances[i] << endl;
                        }
                    }
                } catch (const invalid_argument& e) {
                    cerr << "ERROR: " << e.what() << endl;
                }
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;
            }

            //DFS
            else if(check==3) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "DFS"<< endl;

                DFSstruct DFSfunc;

                int dfsEdges;
                cout << "NUMBER OF EDGES: ";
                cin >> dfsEdges;
                vector<vector<int>> adj(dfsEdges);

                cout << "ENTER THE EDGES IN THE FOLLOWING FORMAT:" << endl;
                cout << "node1 node2" << endl;
                for (int i = 0; i < dfsEdges; i++) {
                    int u;
                    int v;
                    cout << "INSERT: ";
                    cin >> u >> v;

                    adj[u].push_back(v);
                    adj[v].push_back(u);
                }

                int start;
                cout << "FROM WHAT POINT WILL IT START?" << endl;
                cout << "STARTING POINT: ";
                cin >> start;

                cout << "DFS FROM "<< start << " to the end"<< endl;

                DFSfunc.DFS(adj,start);
                cout << endl;

                cout << "------------------------------------------------------------"<<endl;

            }

            //BFS
            else if(check==4) {
                cout << "------------------------------------------------------------"<<endl;
                cout << "BFS"<< endl;
                unordered_map<int, vector<int>> graph;
                int numEdges;
                int startNode;

                cout << "ENTER THE NUMBER OF EDGES ";
                cin >> numEdges;

                cout << "ENTER THE EDGES IN THE FOLLOWING FORMAT:" << endl;
                cout << "node1 node2" << endl;
                for (int i = 0; i < numEdges; i++) {
                    int u;
                    int v;
                    cout << "INSERT: ";
                    cin >> u >> v;

                    graph[u].push_back(v);
                    graph[v].push_back(u);
                }

                displayGraph(graph);

                cout << "ENTER THE STARTING NODE: ";
                cin >> startNode;

                cin.ignore();
                bfsInteractive(graph, startNode);
                cout << endl;
                cout << "------------------------------------------------------------"<<endl;

            }else if(check==5) {
                cout << "Sending you back to the menu..." << endl;
            }else {
                cout <<"It seems that option isn't available, try again"<<endl;
                cout << "VISIT: ";
                cin >> check;
            }

        }else if (check==5) {
            cout << endl;
            cout << "YOU CHOSE TO EXIT."<<endl;
            cout << "THANKS FOR VIEWING THE CODE ARCHIVE" << endl;
            cout << "CLOSING PROGRAM..." << endl;
            break;

        }else{
            cout << "It seems that option isn't available, try again" <<endl;
        }

        cout << endl;

        cout << "------------------CODE ARCHIVE-----------------------"<<endl;
        cout << "MENU" << endl;

        cout << "1. SEARCH ALGORITHMS" << endl;
        cout << "2. SORTING ALGORITHMS" <<endl;
        cout << "3. LINEAR DATA STRUCTURE" << endl;
        cout << "4. NON LINEAR DATA STRUCTURE" << endl;
        cout << "5. EXIT ARCHIVE"<< endl;

        cout << "------------------------------------------------------------"<< endl;

        cout << "ACCESS THE ARCHIVES (Y/N): ";
        cin >> stringCheck;
    }
    cout << endl;
    cout << "------------------------------------------------------------"<< endl;
}
