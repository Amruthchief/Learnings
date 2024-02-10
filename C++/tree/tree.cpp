#include<iostream>
#include"exception.h"

template<class T>
class BTnode
{
    T data;
    BTnode<T> *lefttree;
    BTnode<T> *righttree;
public:

    BTnode(){lefttree=righttree=0;    }

    BTnode(const T& x){data=x;lefttree=righttree=0;    }

    BTnode(const T& x,BTnode *l,BTnode *r){data=x;lefttree=l;righttree=r;    }
};




int main()
{
    
  
    return 0;


}
