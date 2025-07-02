#include <iostream>
#include<string>
using namespace std;
struct Book{
    string title;
    string author;
    float price;
};

void input(Book& );
void print(Book) ;
Book findmax(Book[],int);

int main()
{
    int size=3;
    Book books[size];

    cout<<"Enter 3 Book information:\n ";

    for (int i=0;i<size;i++)
    {
        input(books[i]);
    }

    cout<<"print 3 book information:\n";
    for (int i=0;i<size;i++)
    {
        print(books[i]);
    }

    Book Expensive=findmax(books,size);
    cout<<"Expensive book:\n";
    print(Expensive);

    return 0;
}    
void input(Book& b)
{
    cout << "Book name : ";
    getline(cin, b.title);
    cout << "Book auther : ";
    getline(cin, b.author);
    cout << " Book price: ";
    cin >> b.price;
    cin.ignore(); 
}
void print(Book b)
{
    cout <<"Title: "<<b.title<<" Author: "<<b.author<<" Price:"<<b.price<<endl;
}
Book findmax(Book b[], int s)
{
    Book max=b[0];
    for (int i=1;i<s;i++)
    {
        if (b[i].price>max.price)
        max=b[i];
    }
    return max;
}