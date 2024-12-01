#include <iostream>
#include "bubbleSort.h"
#include <vector>
#include <string>
#include <iostream>

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

            if(check==1) {
                cout << "LINEAR SEARCH"<< endl;

            }else if(check==2) {
                cout << "BINARY SEARCH"<< endl;

            }else if (check==3){
                cout << "Sending you back to the menu..." << endl;

            }else {
                cout <<"It seems that option isn't available, try again"<<endl;
                cout << "VISIT: ";
                cin >> check;
            }

        }else if (check==2) {
            cout << "1. BUBBLE SORT" << endl;
            cout << "2. SELECTION SORT" <<endl;
            cout << "3. INSERTION SORT" << endl;
            cout << "4. MERGE SORT" << endl;
            cout << "5. QUICK SORT"<< endl;
            cout << "6. GO BACK" << endl;

            cout << "TYPE THE NUMBER OF THE OPTION YOU WANT TO VISIT."<<endl;
            cout << "VISIT: ";
            cin >> check;

            if(check==1) {
                cout << "BUBBLE SORT"<< endl;
                BubbleSortAlg bubbleSort;
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

                bubbleSort.bubbleSort(bubble);

                cout << "ORDERED ARRAY: ";
                for(int i=0;i<bubble.size();i++) {
                    cout << bubble[i] << " ";
                }
                cout << endl;


            }else if(check==2) {
                cout << "SELECTION SORT"<< endl;

            }else if(check==3) {
                cout << "INSERTION SORT"<< endl;

            }else if(check==4) {
                cout << "MERGE SORT"<< endl;

            }else if(check==5) {
                cout << "QUICK SORT"<< endl;

            }else if(check==6) {
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

            if(check==1) {
                cout << "STACKS"<< endl;

            }else if(check==2) {
                cout << "QUEUES"<< endl;

            }else if(check==3) {
                cout << "LINKED LISTS"<< endl;

            }else if(check==4) {
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

            if(check==1) {
                cout << "BINARY TREE AVL"<< endl;

            }else if(check==2) {
                cout << "DIJKSTRA"<< endl;

            }else if(check==3) {
                cout << "DFS"<< endl;

            }else if(check==4) {
                cout << "BFS"<< endl;

            }else if(check==5) {
                cout << "Sending you back to the menu..." << endl;

            }else {
                cout <<"It seems that option isn't available, try again"<<endl;
                cout << "VISIT: ";
                cin >> check;
            }

        }else if (check==5) {
            cout << "THANKS FOR VIEWING THE CODE ARCHIVE" << endl;
            cout << "CLOSING PROGRAM..." << endl;
            break;

        }else{
            cout << "It seems that option isn't available, try again" <<endl;
        }

        cout << endl;
        cout << "ACCESS THE ARCHIVES (Y/N): ";
        cin >> stringCheck;

    }

    cout << endl;
    cout << "------------------------------------------------------------"<<endl;









}
