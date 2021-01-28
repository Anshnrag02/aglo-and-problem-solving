#include <iostream>
using namespace std;

int main(){
    int length;
    cout<<"Enter the number of elements in array.\n";
    cin>>length;
    int*arr=new int[length];
    int size=0,num;
    char resp='y';
    do{
        do{
            cout<<"1.Add/Append\n2.Insert\n3.Change size\n4.Delete\n5.Search Index\n6.Search and Replace\n7.Reverse\n8.Show\n";
            cin>>num;
        }while(num<=1&&num>=8);
        if(num==1)
        {
            if(size==length)
                cout<<"Overflow";
            else
            {   
                cout<<"enter element at index "<<size<<endl;
                cin>>arr[size];
                size++;
            }
        }
        if(num==2)
        {
            cout<<"enter the index\n";
            int index,temp;
            cin>>index;
            cout<<"enter element at index"<<index<<endl;
            cin>>temp;
            for(int i=size;i>=index;i--)
            {
                arr[i]=arr[i+1];
            }
            arr[index]=temp;
            size++;
        }
        if(num==3)
        {
            cout<<"enter new size"<<endl;
            int m;
            cin>>m;
            int*q=new int[m];
            for(int i=0;i<size;i++)
            {
                q[i]=arr[i];
            }
            delete []arr;
            *arr=*q;
            delete []q;
            length=m;
        }
        if(num==4)
        {
            cout<<"enter the index\n";
            int index;
            cin>>index;
            for(int i=index;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
        }
        if(num==6)
        {
            cout<<"enter the find\n";
            int temp,index=-1,temp2;
            cin>>temp;
            cout<<"enter the replacement\n";
            cin>>temp2;
            for(int i=0;i<size;i++)
                if(arr[i]==temp)
                {
                    index=i;
                    break;
                }
            if(index>=0)
                arr[index]=temp2;
            else
                cout<<"not found\n";
        }
        if(num==7)
        {
            int temp;
            for(int i=0;i<size/2;i++)
            {
                temp=arr[size-i];
                arr[size-i]=arr[i];
                arr[i]=temp;
            }
        }
        if(num==8)
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<"\t";
            }
        }
        cout<<endl;
        cout<<"press y to continue"<<endl;
        cin>>resp;
    }while(resp=='y');
    delete []arr;
    return 0;
}
