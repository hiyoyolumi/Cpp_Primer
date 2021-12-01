#define MAX 20
#include<stdio.h>
typedef char VertaxData;
typedef struct ArcNode{
    int adj;
}ArcNode;
typedef struct{
    VertaxData vertax[MAX];
    struct ArcNode arcs[MAX][MAX];
    int vernum,arcnum;//定点个数和关系个数
}MGraph;
int Locate(MGraph *G,char v){
    for(int i=0;i<G->vernum;i++){
        if(G->vertax[i]==v)
            return i;
    }
    return 0;
}
void CreatDG(MGraph *G){
    int i,j,k;
    VertaxData v1,v2;
    scanf("%d %d",&G->vernum,&G->arcnum);
    for(i=0;i<G->vernum;i++){
        scanf(" %c",&G->vertax[i]);
    }
    for(i=0;i<G->vernum;i++){
        for(j=0;j<G->vernum;j++){
            G->arcs[i][j].adj=0;
        }
    }
    for(k=0;k<G->arcnum;k++){
        scanf("%c%c",&v1,&v2);
        i=Locate(G,v1);
        j=Locate(G,v2);
        G->arcs[i][j].adj=1;
    }
}
void DegreeDG(MGraph *G,int od[],int id[]){
    int i,j;
    for(i=0;i<G->vernum;i++){
        od[i]=0;
        for(j=0;j<G->vernum;j++){
            if(G->arcs[i][j].adj==1)
                od[i]++;
        }
    }
    for(j=0;j<G->vernum;j++){
        id[j]=0;
        for(i=0;i<G->vernum;i++){
            if(G->arcs[i][j].adj==1)
                id[j]++;
        }
    }
}
int main(){
    MGraph G;
    CreatDG(&G);
    int od[MAX],id[MAX];
    DegreeDG(&G,od,id);
    for(int i=0;i<G.vernum;i++){
        printf("%c %d %d\n",G.vertax[i],od[i],id[i]);
    }
    return 0;
}