    #include <cstdio>
    #include <cstring>
    #include <map>
    #include <string>
    #include <vector>
    #define INF 1<<25
    using namespace std;
    map < string, int > m;
    struct NODE {
        vector < int > adj;
        vector < int > w;
        vector < int > next;
        vector < char > ccon;
        bool has[27];
    } nodes[4000];
    int len, n;
    char l1[64], l2[64], word[64];
    bool dbg = 0;
    void clear(int k){
        nodes[k].adj.clear();
        nodes[k].w.clear();
        nodes[k].next.clear();
        nodes[k].ccon.clear();
        memset(nodes[k].has,0,27);
    }
    int check(string x){
        map < string , int > :: iterator it;
        if((it=m.find(x)) == m.end()){
            m[x] = n;
            clear(n);
            return n++;
        }
        return (*it).second;