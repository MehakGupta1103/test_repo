<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

int vis[8][8];
int lav[8][8];

int getX(string s)
{
    return s[0] - 'a';
}

int getY(string s)
{
    return s[1] - '1';
}

vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {-2, -1}, {-2, 1}};

bool isvalid(int x, int y)
{
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

int bfs(string source, string dest)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);

    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;
    lav[sourceX][sourceY] = 0;

    while (!q.empty())
    {
        pair<int, int> v = q.front();
        
        int x = v.first, y = v.second;
        q.pop(); 

        for (auto &it : movements)
        {
            int childX = it.first + x;
            int childY = it.second + y;
            if (!isvalid(childX, childY))
                continue;
            if (!vis[childX][childY])
            {
                q.push({childX, childY});
                lav[childX][childY] = lav[x][y] + 1;
                vis[childX][childY] = 1;
            } 
        }
        if (lav[destX][destY] != INF)
        {
            break;
        }
    }
    return lav[destX][destY];
}

void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            vis[i][j] = 0;
            lav[i][j] = INF;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        reset();
        string s1, s2;
        cin >> s1 >> s2;
        int ans = bfs(s1, s2);
        cout << ans << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

int vis[8][8];
int lav[8][8];

int getX(string s)
{
    return s[0] - 'a';
}

int getY(string s)
{
    return s[1] - '1';
}

vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {-2, -1}, {-2, 1}};

bool isvalid(int x, int y)
{
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

int bfs(string source, string dest)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);

    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;
    lav[sourceX][sourceY] = 0;

    while (!q.empty())
    {
        pair<int, int> v = q.front();
        
        int x = v.first, y = v.second;
        q.pop(); 

        for (auto &it : movements)
        {
            int childX = it.first + x;
            int childY = it.second + y;
            if (!isvalid(childX, childY))
                continue;
            if (!vis[childX][childY])
            {
                q.push({childX, childY});
                lav[childX][childY] = lav[x][y] + 1;
                vis[childX][childY] = 1;
            } 
        }
        if (lav[destX][destY] != INF)
        {
            break;
        }
    }
    return lav[destX][destY];
}

void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            vis[i][j] = 0;
            lav[i][j] = INF;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        reset();
        string s1, s2;
        cin >> s1 >> s2;
        int ans = bfs(s1, s2);
        cout << ans << endl;
    }
    return 0;
>>>>>>> 592d1cc22f99640d34d6d34ceb0586d3744f6b6d
}