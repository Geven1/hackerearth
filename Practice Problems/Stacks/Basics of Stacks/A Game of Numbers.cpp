/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/
*/

#include <iostream>

using namespace std;

 

int main(){

int n;

cin>>n;

int arr[n]={};

for (int i{};i<n;i++){

cin>>arr[i];

}
 

int greater_index[n]={};

bool done{false};

int smaller[n]={};

 

for (int i{};i<n;i++){

done=false;

for (int j{i};j<n;j++){

if (arr[j]>arr[i]){

greater_index[i]=j;

done=true;

break;

}

}

if (done==false)

greater_index[i]=-1;

}

 

for (int i{};i<n;i++){

done=false;

for (int j{i};j<n;j++){

if (arr[j]<arr[i]){

smaller[i]=arr[j];

done=true;

break;

}

}

if (done==false)

smaller[i]=-1;

}

 

for (int i{};i<n;i++){

if (greater_index[i]==-1)

cout<<-1<<' ';

else

cout<<smaller[greater_index[i]]<<' ';

}
 

}
