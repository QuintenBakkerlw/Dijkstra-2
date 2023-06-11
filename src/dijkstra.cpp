#include <iostream>
using namespace std;
#include "dijkstra.hpp"
#include <string>

<<<<<<< HEAD

DijkstraAlgo::DijkstraAlgo(){
}

void DijkstraAlgo::Dijkstra(int graph[4][4], int src, int end, int size) 
{
    int distance[size]; // array to calculate the minimum distance for each node                             
    bool visited[size];// boolean array to mark visited and unvisited for each node
    int lastvisited[size];// array to see last visited of a node
    int route[size];// route in numbers
    string routestring[size]; // route displayed in letters
=======
DijkstraAlgo::DijkstraAlgo(int graph[4][4],int src, int end, int size) // adjacency matrix 
{


   
    int distance[size]; // // array to calculate the minimum distance for each node                             
    bool visited[size];// boolean array to mark visited and unvisited for each node
    int lastvisited[size];// array to see last visited of a node
    int route[size];// route in numbers
   
    int node;
    int counter = 2;
    string routestring[size]; // route displayed in alphabet
>>>>>>> c332c52718b7d2c0c21c71e694902214ad681b50
    string alphabet = "ABCDEFGHIKLMNOPQRSTVXYZ";

    
   
    
    
<<<<<<< HEAD
    for(int k = 0; k<size; k++)// filling in array to standard value
=======
    
    for(int k = 0; k<size; k++)// filling in array to standard
>>>>>>> c332c52718b7d2c0c21c71e694902214ad681b50
    {
        distance[k] = INT_MAX;
        visited[k] = false;    
    }
    
    distance[src] = 0;   // Source vertex distance is set 0               
<<<<<<< HEAD
    lastvisited[0] = 0; // lastvisited of source is set 0
    route[0] = end; // route begin set to end
    
    for(int k = 0; k<size; k++){
        
        int m=shortestPath(distance,visited, size); // find shortest path avaliable
        visited[m]=true;
        
        for(int k =0; k<size; k++)                  
=======
    lastvisited[0] = 0;
    route[0] = end;
    

    for(int k = 0; k<size; k++)                           
    {
        int m=shortestPath(distance,visited, size); 
        visited[m]=true;
        for(int k = 0; k<size; k++)                  
>>>>>>> c332c52718b7d2c0c21c71e694902214ad681b50
        {
            // updating the distance of neighbouring vertex
            if(!visited[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k]){
                distance[k]=distance[m]+graph[m][k];
                lastvisited[k] = m;
<<<<<<< HEAD
               
            }   
        }

    }   

    // values to calculate correct path
    int node;
    int counter = 2;
    route[1] = lastvisited[end];
    node = lastvisited[end];
    
    for(int k = 0; k<size; k++)                      
    { 
        
=======
            }   
        }
    }

    route[1] = lastvisited[end];
    node = lastvisited[end];
    

    for(int k = 0; k<size; k++)                      
    { 
>>>>>>> c332c52718b7d2c0c21c71e694902214ad681b50
        for (int i= 0; i<size;i++){ // checks the place of lastvisted for each node to make a path
            if(i == node){
                route[counter] = lastvisited[i];
                node = lastvisited[i];
                counter += 1;
                };
            
        };
<<<<<<< HEAD
      
=======
>>>>>>> c332c52718b7d2c0c21c71e694902214ad681b50
        // convert numbers to letters
        routestring[k] = alphabet[route[k]];
        cout << routestring[k];
    };

<<<<<<< HEAD
};

=======
    // for(int i =0; i<4; i++){
    //     // cout << route[i];
        
        
    // };
>>>>>>> c332c52718b7d2c0c21c71e694902214ad681b50



