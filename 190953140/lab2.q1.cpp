            #include<iostream>
            using namespace std;
            #define maxsize 10
            class stack {
                public:

                    int stk[maxsize];
                    int top=-1;

                    void push( int n);
                    bool isempty();
                    void pop();
                    int peak();



            };
            void stack :: push(int x)
            {


                 if (top>maxsize-1)
                 {
                cout<<"Stack overflow";
                 }

               else {
                stk[++top]=x; }
            }

            void stack :: pop()
            {
                if(top==-1)
                {
                    cout<<"Stack Underflow";
                }
                else
            {
                cout<<"Pop element"<<stk[top--];
            }

            }

            bool stack :: isempty()
            {
                if(top==-1)
                    return  true;
                else
                    return false;
            }
            int stack :: peak()
            {
                return stk[top];
            }
            int main()
            {
                stack stk1;
                stk1.push(10);
                stk1.push(20);
                cout<<endl<<stk1.isempty();
                cout<<"Top:"<<stk1.peak();

            }
