#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 /*structure represents a node to store the names and pointer to next node*/
typedef struct node{
    char name[50];  
}node;

/* Structure represents a Graph with a 2D array named adj_matrix and list of vertices */
typedef struct Graph{
    int numberOfVertices;
    int adj_matrix[50][50];
    node* vertexlist[50];
}Graph;
static int numVertices=0;
//static int numedge=0;
/*A function to create a newnode*/
node* createNode(char* name){
    node* newNode = (node*)malloc(sizeof(node));
    strcpy(newNode->name,name);
    return newNode;
}

Graph* createGraph(int vertices){
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numberOfVertices = vertices;
    int N = graph->numberOfVertices, i,j;
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            graph->adj_matrix[i][j] = 0;//initializing matrix

        }
        
    }
    return graph;
}

/*A function to create a graph with an array of vertex lists */
void insert(Graph* graph,char* vertexname){
    graph->vertexlist[numVertices++]=createNode(vertexname);

}

// get the location of the person and his friend
int getindex(Graph* graph,char* vertexname){
    int i;
    for(i=0; i < numVertices; i++){
        if(strcmp(graph->vertexlist[i], vertexname)==0){
            return i;
        }
    }
    return -1;

}

/* */
int search(char* name, Graph* graph){
    
}

/*adds an edge to an undirected graph*/
void addConnection(Graph* graph, char* person, char* friend){
    int u = getindex(graph, person);
    int v =getindex(graph, friend);
/*insert your code here*/



}


/*Function to display adjacency matrix of the graph*/
void printMatrix(int matrix[50][50], Graph* graph){
    int row,col,nodes=numVertices;
    printf("\nAdjacent matrix:\n");
    printf("        ");
    for (col = 0; col < nodes; col++)
    {
    printf("%6s ", graph->vertexlist[col]->name);
    }
    printf("\n");
    for (col = 0; col < nodes; col++)
    {
    printf("-------------");
    }
    printf("\n");
    for (row = 0; row < nodes; row++) {
    printf("%7s| ", graph->vertexlist[row]->name);
    for (col = 0; col < nodes; col++) {
    printf("  %2d    ", matrix[row][col]);
    }
    printf("\n");
    }

}


int main(){
    
    int Num=7;
    //construct a graph
    Graph* graph = createGraph(Num);
    insert(graph,"personA");
    insert(graph,"personB");
    insert(graph,"personC");
    insert(graph,"personD");
    insert(graph,"personE");
    insert(graph,"personF");
    insert(graph,"personG");
    addConnection(graph, "personA", "personB");
    addConnection(graph, "personA", "personG");
    addConnection(graph, "personA", "personE");
    addConnection(graph, "personB", "personE");
    addConnection(graph, "personB", "personC");
    addConnection(graph, "personB", "personG");
    addConnection(graph, "personC", "personD");
    addConnection(graph, "personC", "personE");
    addConnection(graph, "personD", "personE");
    addConnection(graph, "personD", "personF");
    addConnection(graph, "personE", "personF");
    addConnection(graph, "personE", "personG");
    addConnection(graph, "personF", "personG");
    
    //function to print the adjacency matrix representation of a graph
    printMatrix(graph->adj_matrix, graph);
   
	return 0;
}
