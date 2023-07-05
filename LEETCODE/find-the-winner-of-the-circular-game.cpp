// QUEUE METHOD !!!

class Solution {
public:
    int findTheWinner(int n, int k)
    {
        queue<int> Q;
        for (int i = 1; i <= n; i++)
            Q.push(i);
        int C = k;
        while (Q.size() > 1)
        {
            int V = Q.front();
            Q.pop();
            C--;
            if (C == 0)
                C = k;
            else
                Q.push(V);
        }
        return Q.front();
    }
};



// TRiCKY METHOD !!!

class Solution {
public:
    int findTheWinner(int n, int k)
    {
        int res = 0;

        for (int i = 1; i <= n; i++)
            res = (res + k) % i;

        return res + 1;
    }
};
