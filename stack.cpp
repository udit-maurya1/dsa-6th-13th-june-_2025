#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

  
    st.push(5);
    st.push(9);
    st.push(8);
    st.push(11);
    st.push(13);
    st.push(19);
    st.pop(); // Remove 19
    st.pop();




    cout << "Top: " << st.top() << endl; // 30

}