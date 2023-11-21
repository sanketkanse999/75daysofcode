#include<iostream>
using namespace std;

int main()  {
/*  my first program */

    cout<< " Hello world"<< endl ;

/*   Data types and variable */ 

        int a = 123;
        cout << a << endl;
    
        char b = 'v';
        cout << b << endl;

        bool bl =true;
        cout << bl << endl;

        float f = 1.3;
        cout << f << endl;

        double d = 1.35;
        cout << d << endl;

/* Type Casting  */
        
        int g = 'g';
        cout << g << endl;

        char h= 84;
        cout << h << endl;

/*  Operators */ 

/* 1) Arithmetic Operators */

        float j = 12/6;
        cout << j << endl;

        float oo =999/33;
        cout << oo << endl;

/* 2) Relational Operators */   

        int c = 123;
        int s = 5;
        
        bool first = (c==s);
        cout << first << endl;

        bool second = (c<=s);
        cout << second << endl;

        bool third = (c>=s);
        cout << third << endl;

        bool fourth = (c!=s);
        cout << fourth << endl;

/*  3)Logical Operators */

/*  i) AND( && ) */ 

        int aa=5, bb=34, dd=38;
        cout << ((aa<10)&&(bb!=8)&&(dd>4))<< endl;

/*  ii) OR ( || ) */

        int ee=48, ff=8, gg=49;
        cout << ((ee<4)||(ff>0)||(gg!=8)) << endl;

/*  iii)  NOT ( ! )  */      

        int t = 1;
        cout << !t << endl;

        int o = 0;
        cout << !o << endl;
    
}