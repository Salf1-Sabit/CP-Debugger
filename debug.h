// The whole game starts here
#define dbg(args...) {string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s);istream_iterator<string> _it(_ss); print(_it, args);} 

// letting others know
template <typename T, typename... V> void print(istream_iterator<string> it, T t, V... v); 
template <typename T> void print(vector<T> vec);
// if it runs out of args...
void print(istream_iterator<string> it){} 
// for nested stuff (primitives)
template<typename T> void print(T elem){cerr << elem;} 
// For nested stuff (pairs only)
template <typename T, typename V> void print(pair<T, V> p){cerr << "{" << p.first << ", " << p.second << "}";} 
// For nested stuff (arrays only)
template <typename T, size_t n> void print(array<T, n> arr){cerr << "{"; for(int i = 0; i < (int)arr.size(); i++){cerr << arr[i] << (i == (int)arr.size() - 1 ? "" : ", ");} cerr << "}";} 
// For vector
template <typename T, typename... V> void print(istream_iterator<string> it, vector<T> vec, V... args){cerr << *it << " = ["; for(int i = 0; i < (int)vec.size(); i++){print(vec[i]); cerr << (i == (int)vec.size() - 1 ? "" : ", ");} cerr << "]\n"; print(++it, args...);} 
// For map
template <typename T, typename V, typename... X> void print(istream_iterator<string> it, map<T, V> m, X... args){int sz = (int)m.size(), cnt = 0; cerr << *it << " = ["; for(auto i : m){cerr << "{"; print(i.first); cerr << ", "; print(i.second); cnt++; cerr << (cnt == sz ? "}" : "}, ");} cerr << "]\n"; print(++it, args...);}
// for u-map
template <typename T, typename V, typename... X> void print(istream_iterator<string> it, unordered_map<T, V> m, X... args){int sz = (int)m.size(), cnt = 0; cerr << *it << " = ["; for(auto i : m){cerr << "{"; print(i.first); cerr << ", "; print(i.second); cnt++; cerr << (cnt == sz ? "}" : "}, ");} cerr << "]\n"; print(++it, args...);}
// For multimap
template <typename T, typename V, typename... X> void print(istream_iterator<string> it, multimap<T, V> m, X... args){int sz = (int)m.size(), cnt = 0; cerr << *it << " = ["; for(auto i : m){cerr << "{"; print(i.first); cerr << ", "; print(i.second); cnt++; cerr << (cnt == sz ? "}" : "}, ");} cerr << "]\n"; print(++it, args...);}
// For set
template <typename T, typename... X> void print(istream_iterator<string> it, set<T> s, X... args){int sz = (int)s.size(), cnt = 0; cerr << *it << " = ["; for(auto i : s){print(i); cnt++; cerr << (cnt == sz ? "" : ", ");} cerr << "]\n"; print(++it, args...);}
// For m-set
template <typename T, typename... X> void print(istream_iterator<string> it, multiset<T> s, X... args){int sz = (int)s.size(), cnt = 0; cerr << *it << " = ["; for(auto i : s){print(i); cnt++; cerr << (cnt == sz ? "" : ", ");} cerr << "]\n"; print(++it, args...);}
// For greater<int> m-set
template <typename T, typename... X> void print(istream_iterator<string> it, multiset<T, greater<int>> s, X... args){int sz = (int)s.size(), cnt = 0; cerr << *it << " = ["; for(auto i : s){print(i); cnt++; cerr << (cnt == sz ? "" : ", ");} cerr << "]\n"; print(++it, args...);}
// For priority queue
template <typename T, typename... X> void print(istream_iterator<string> it, priority_queue<T> pq, X... args){int sz = (int)pq.size(), cnt = 0; cerr << *it << " = ["; while(!pq.empty()){print(pq.top()); pq.pop(); cnt++; cerr << (cnt == sz ? "" : ", ");} cerr << "]\n"; print(++it, args...);}
// Triggering point
template <typename T, typename... V> void print(istream_iterator<string> it, T t, V... v){ cerr << *it << " = " << t << '\n'; print(++it, v...);} 
