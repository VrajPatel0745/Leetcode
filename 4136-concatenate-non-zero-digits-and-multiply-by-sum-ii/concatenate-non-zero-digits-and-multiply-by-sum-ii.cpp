class Solution {
public:
    static const int MOD = 1000000007;

    struct Node {
        long long val;
        int cnt;
        int sum;

        Node(long long v=0,int c=0,int s=0){
            val=v;
            cnt=c;
            sum=s;
        }
    };

    vector<Node> seg;
    vector<long long> pow10;
    string s;
    int n;

    Node merge(Node a, Node b){
        Node res;
        res.cnt = a.cnt + b.cnt;
        res.sum = a.sum + b.sum;
        res.val = (a.val * pow10[b.cnt] + b.val) % MOD;
        return res;
    }

    void build(int idx,int l,int r){

        if(l==r){

            if(s[l]=='0')
                seg[idx]=Node(0,0,0);
            else{
                int d=s[l]-'0';
                seg[idx]=Node(d,1,d);
            }
            return;
        }

        int mid=(l+r)/2;

        build(2*idx,l,mid);
        build(2*idx+1,mid+1,r);

        seg[idx]=merge(seg[2*idx],seg[2*idx+1]);
    }

    Node query(int idx,int l,int r,int ql,int qr){

        if(qr<l || r<ql)
            return Node(0,0,0);

        if(ql<=l && r<=qr)
            return seg[idx];

        int mid=(l+r)/2;

        Node left=query(2*idx,l,mid,ql,qr);
        Node right=query(2*idx+1,mid+1,r,ql,qr);

        return merge(left,right);
    }

    vector<int> sumAndMultiply(string str, vector<vector<int>>& queries) {

        s=str;
        n=s.size();

        pow10.resize(n+1);
        pow10[0]=1;

        for(int i=1;i<=n;i++)
            pow10[i]=(pow10[i-1]*10)%MOD;

        seg.resize(4*n+5);

        build(1,0,n-1);

        vector<int> ans;

        for(auto &q:queries){

            Node cur=query(1,0,n-1,q[0],q[1]);

            ans.push_back((cur.val*1LL*cur.sum)%MOD);
        }

        return ans;
    }
};