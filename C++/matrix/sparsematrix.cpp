#include<iostream>
#include<string>

template <class T>
class Term
{
    int rows,col;
    T term;

};
template<class T>
class sparsematrix
{
    int rows, col, terms,maxterms;
    Term<T> *a;
    public:
    sparsematrix(int max=10)
    {
        maxterms=max;
        rows=cols=terms=0;
        a= new Term<T>[maxterms];
    }
    ~sparsematrix(){delete [] a;}

    


};




int main()
{
    
    
    
    return 0;

}