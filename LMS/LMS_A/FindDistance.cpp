/*
 * FindDistance.cpp
 *
 *  Created on: 4 Oca 2022
 *      Author: ADMİN
 */

#include"FindDistance.h"
FindDistance::~FindDistance(){
	delete mPath;
}
int * FindDistance::functionFindMin(int *array, int row, int cols, int source, int destination){
    int min,src,dest,count=0,next,i,j;
    src = source;
    dest = destination;
    int mat[16][16]={0},vis[16]={0},pred[16],dist[16],path[16];
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            if(array[i*16+j] <= 0){
                mat[i][j] = 99999;
            }
            else{
                mat[i][j]=array[i*16+j];
            }
        }
    }
    for(i=0;i<16;i++){
        dist[i]=mat[src][i];
        pred[i]=src;
    }
    dist[src]=0;
    vis[src]=1;
    while(count<8){
        min=99999;
        for(i=0;i<16;i++){
            if(dist[i]<min && vis[i]==0){
                min=dist[i];
                next=i;
            }
        }
        vis[next]=1;
        for(i=0;i<16;i++){
            if(min+mat[next][i]<dist[i]){
                dist[i]=min+mat[next][i];
                pred[i]=next;
            }
        }
        count++;
    }

    if(dist[dest]>99999){
        len[0]=99999;
    }
    else{
        int current,n=0;
        current = dest;
        count = 1;
        path[0] = dest;
        while(current!=src){
            path[count]=pred[current];
            current = pred[current];
            count++;
        }
        len[0]=dist[dest];
        len[12]=count;
        for(i=count;i>0;i--){
            len[i]=path[n];
            n++;
        }
    }
    return len;	
}

int FindDistance::findDistance(string city1,string city2){
	fstream new_file;
	int n;
	int a[256],i=0,j=0,c1=0,c2=0;
	new_file.open("distance.txt",ios::in);new_file >> n;
	while(!new_file.eof()){
		a[i] = n;
		i++;
		new_file >> n;
	}
	string city[16] ={
		"konya",
		"ankara",
		"istanbul",
		"izmir",
		"kocaeli",
		"nyc",
		"nj",
		"la",
		"london",
		"manchester",
		"moscow",
		"petersburg",
		"pekin",
		"shangai",
		"doha",
		"museyid"
	};
	for(i=0;i<16;i++){
		if(city[i] == city1){
			c1 = i;
		}
		if(city[i] == city2){
			c2 = i;
		}
	}
	mPath=functionFindMin(a,16,16,c1,c2);
       for(i=1;i<mPath[12];i++){
	       cout << city[mPath[i]] << " ---> ";
    	}
    cout << city[mPath[i]] << " ";
    cout<<"km: "<<mPath[0]<<endl;
	km = mPath[0];
	return km;			
}

