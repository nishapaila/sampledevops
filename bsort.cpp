#include<iostream>
using namespace std;
template <class T>
class Bsort{
	T a[10];
	int n,i,j;
	public:
		void getdata();
		void sorting();
		void putdata();
		void swap(T *,T *);
};
template <class T>
void Bsort<T>::swap(T *a,T *b)
{
	T t;
	t=*a;
	*a=*b;
	*b=t;
}
template <class T>
void Bsort<T>:: sorting(){
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
template <class T>
void Bsort<T>:: getdata()
{
cout<<"\nenter size:";
	cin>>n;
cout<<"\nenter array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
template <class T>
void Bsort<T>:: putdata()
{
	cout<<"the array is:";
for(i=0;i<n;i++)
cout<<"\t"<<a[i];
}
int main()
{
	Bsort<int> op;
	op.getdata();
	cout<<"\nbefore sorting:";
	op.putdata();
	op.sorting();
	cout<<"\nafter sorting:";
	op.putdata();
	Bsort<char> o;
	o.getdata();
	cout<<"\nbefore sorting:";
	o.putdata();
	o.sorting();
	cout<<"\nafter sorting:";
	o.putdata();
	Bsort<float> of;
	of.getdata();
	cout<<"\nbefore sorting:";
	of.putdata();
	of.sorting();
	cout<<"\nafter sorting:";
	of.putdata();
	
}
