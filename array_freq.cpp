#include<iostream>
using  namespace std;
int main(){
	int arr[10]={1,2,34,4,5,1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int freq[10];
	int i,j,count,visited=-1;
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]=arr[j])
			{
				count++;
				freq[j]=visited;
			}
		}
		if(freq[i]!=visited)
		{
		freq[i]=count;	
		}
	} 
	cout<<"----------------------\n";
    cout<<"   Element|Frequency\n";
    cout<<"----------------------\n";
     for( i = 0; i < size; i++){  
        if(freq[i] != visited){  
            cout<<"       "<<arr[i]<<"  |  "<<   freq[i]<<"\n";
        }   
    }  cout<<"---------------------";
	return 0;
}
