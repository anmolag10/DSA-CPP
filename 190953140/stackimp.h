            #include<iostream>

            #define maxsize 1000
            class stackimp {
                public:

                    int stk[maxsize];
                    int top=-1;

                    void push( int n);
                    bool isempty();
                    void pop();
                    int peak();



            };
            void stackimp :: push(int x)
            {


                 if (top>maxsize-1)
                 {
                std::cout<<"Stack overflow";
                 }

               else {
                stk[++top]=x; }
            }

            void stackimp :: pop()
            {
                if(top==-1)
                {
                    std::cout<<"Stack Underflow";
                }
                else
            {
                top--;

            }
            }
            bool stackimp :: isempty()
            {
                if(top==-1)
                    return  true;
                else
                    return false;
            }
            int stackimp :: peak()
            {
                return stk[top];
            }
