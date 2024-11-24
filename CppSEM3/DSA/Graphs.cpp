//
//  Graphs.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 23/11/24.
//


//making the programes for the bfs algo...

//#include<iostream>
//using namespace std;
//
//int weight[10][10],i,j,n,qu[10],front=0,rear=0,sv,Visit[10],visited[10];
//void graph(){
//    int m;
//    cout << "Enter the vertices: ";
//    cin >> n;
//    cout << "Enter the edges: ";
//    cin >> m;
//    cout << "enter the pair of vertices";
//    for (int s=0; s<=m; s++) {
//        cin >> i >> j;
//        weight[i][j]=1;
//        weight[j][i]=1;
//    }
//}
//
//void resetVisitArrays(){
//    for (int i=0; i<10; i++) {
//        Visit[i]=0;
//        visited[i]=0;
//    }
//    front=rear=0;
//}
//
//void bfs(){
//    cout << "Enter the source vertice: ";
//    cin >> sv;
//    cout << "vfs traversal " << sv;
//    visited[sv]=1;
//    qu[rear++]=sv;
//    while (front < rear) {
//        sv=qu[front++];
//        for (int j=0; j<=n-1; j++) {
//            if (weight[sv][j]!=0 && Visit[j]!=1 && visited[j]!=1) {
//                cout << j<<" ";
//            }
//        }
//        sv=qu[front++];
//        Visit[sv]=0;
//        visited[sv]=1;
//    }
//}
//int main(){
//    int choice;
//    do {
//        cout << "\nMenu: "<<endl;
//        cout << "1. Create Graph: "<<endl;
//        cout << "2. Perform BFS traversal: "<<endl;
//        cout << "3. Exit: "<<endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//            case 1:
//                graph();
//                resetVisitArrays();
//                break;
//            case 2:
//                resetVisitArrays();
//                bfs();
//                break;
//            case 3:
//                cout << "Exiting programe: \n";
//                break;
//
//            default:
//                cout << "Invalid choice, please try again.\n";
//                break;
//        }
//
//    } while (choice!=3);
//    return 0;
//}

//void worshall algorithm

//#include <iostream>
//using namespace std;
//
//const int INF=1e9;//Alarge value representing infinity
//
//int dist[10][10];//Distance matrix
//int n;//number of vertices.
////functio to create graph
//void creategraph(){
//    int m;
//    cout << "Enter the umber of verticesmax(10): ";
//    cin >> n;
//    if (n>10) {
//        cout << "maximum number of vertices is 10.\n";
//        return;
//    }
//    cout << "Enter the number  of edges: ";
//    cin >> m;
////initialize the distance matrix
//for(int i=0;i<n;i++){
//    for(int j=0;j<n;j++){
//        if(i==j){
//            dist[i][j]=0;//distance from the vertex to itself
//        }
//        else{
//            dist[i][j]=INF;//no disrect path
//        }
//    }
//}
//    cout << "Enter the edges with weights(format : vertex1 vertex2 weight)";
//    for(int i=0;i<m;i++){
//        int u,v,w;
//        cin >> u >> v >> w;
//        dist[u][v]=w;//set the edge weight
//    }
//}
//void floydWarshell(){
//    for (int k=0; k<n; k++) {
//        for (int i=0; i<n; i++) {
//            for (int j=0; j<n; j++) {
//                if (dist[i][k]<INF && dist[k][j] < INF) {
//                    dist[i][j]=min(dist[i][j] , dist[i][k] + dist[k][j]);
//                }
//            }
//        }
//    }
//    cout << "\n All-pairs shortest paths computed using floyd-Warshell.\n";
//}
//
//void printMatrix(){
//    cout << "\n Distance matrix: ";
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<n; j++) {
//            if (dist[i][j]==INF) {
//                cout << "INF";
//            }
//            else{
//                cout << dist[i][j]<< " ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//
//
//int main(){
//    int choice;
//    bool graphCreated=false;
//    do {
//        cout << "Main Menu:" << endl;
//                cout << "1. Create Graph" << endl;
//                cout << "2. Run Floyd-Warshall Algorithm" << endl;
//                cout << "3. Print Distance Matrix" << endl;
//                cout << "4. Exit" << endl;
//                cout << "Enter your choice: ";
//                cin >> choice;
//
//                switch (choice) {
//                    case 1:
//                        creategraph(); // Create the graph and input edges
//                        graphCreated=true;
//                        break;
//                    case 2:
//                        if(graphCreated==false){
//                        cout<<"Please create a graph first"<<endl;
//                    }else{
//
//                        floydWarshell(); // Run the Floyd-Warshall algorithm
//                        cout << "Floyd-Warshall algorithm executed." << endl;
//                        break;
//                    }
//                    case 3:
//                        if(graphCreated==false){
//                        cout<<"Please create a graph first"<<endl;
//                    }else{
//                        printMatrix(); // Print the resulting distance matrix
//                        break;
//                    }
//                    case 4:
//                        cout << "Exiting program." << endl;
//                        break;
//                    default:
//                        cout << "Invalid choice. Please try again." << endl;
//                }
//
//    } while (choice!=4);
//    return 0;
//}
