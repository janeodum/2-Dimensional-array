///MATRIC No:16/52ha117
///COURSE:CSC 317
/// NAME:JANE CHUKWUYEM ODUM

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int arr[2][6];
int i,j;

void sort(int arr[2][6]) ///you are telling the function that it should expect 2x6 array in parameter this is bubble sort funtion
{
    for(int row=0; row< 2; row++)
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<6;j++)
            {
if(arr[row][i]<arr[row][j])
{
    int temp= arr[row][i]; ///swap
    arr[row][i]=arr[row][j];
    arr[row][j]= temp;
}
            }

        }

    }
}

void print(int arr[2][6])
{
for(i=0;i<2;i++)
{
        for(j=0;j<6;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
     cout<<endl;
}
}

void fillingTheMatrix()
{
srand((time(0)));/// seed that links the random number

for(i=0;i<2;i++)
{
    for(j=0;j<6;j++)
    {
   arr[i][j]=rand()%(99)+1; ///produces a random number btw 1-100
   cout<<arr[i][j]<<"  ";
       }
}}

int main(){
cout<<"\n The array of element are:\n";
fillingTheMatrix();
print(arr); ///prints unsorted array
cout<<endl;
sort(arr); /// sorts array
cout<<endl;
print(arr); ///prints sorted array
return 0;
}
