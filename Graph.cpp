#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int adjacent[101][101];
int incidence[101][101];
//int listy[101][101];

void undirectedGraph()
{
    int ch;
    cout << "Choose the type of representation\n1.IncidenceMatrix\n2.Adjacency Matrix\n3.Adjacency List\n";
    cin >> ch;
    int l, m;
    if (ch == 1)
    {
        cout << "Enter the number of vertices";
        cin >> l;
        cout << "Enter the number of edges";
        cin >> m;
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                incidence[i][j] = 0;
            }
        }
        int a, b;
        cout << "Enter the edge in format \"a b\" ";
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            incidence[a][i] = 1;
            incidence[b][i] = 1;
        }
        cout << "Incidence Matrix is as follows:-\n";
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << incidence[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (ch == 2)
    {

        cout << "Enter the number of vertices";
        cin >> l;
        cout << "Enter the number of edges";
        cin >> m;
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= l; j++)
            {
                adjacent[i][j] = 0;
            }
        }
        int a, b;
        cout << "Enter the edge in format \"a b\" ";
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            adjacent[a][b] = 1;
            adjacent[b][a] =1;
        }
        cout << "Adjacent Matrix is as follows:-\n";
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= l; j++)
            {
                cout << adjacent[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        /* code */
        cout << "Enter the number of vertices";
        cin >> l;
        cout << "Enter the number of edges";
        cin >> m;
        vector<int> adj[l+1];
        int a, b;
        cout << "Enter the edge in format \"a b\" ";
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cout<<"Adjancency list as follows\n";
        for(int i=1; i<=l; i++)
        {
            cout<<i<<":- ";
            for(auto x:adj[i])
            {
                cout<<" "<<x;
            }
            cout<<endl;
        }
    }
}




void directedGraph()
{
    int ch;
    cout << "Choose the type of representation\n1.IncidenceMatrix\n2.Adjacency Matrix\n3.Adjacency List\n";
    cin >> ch;
    int l, m;
    if (ch == 1)
    {
        cout << "Enter the number of vertices";
        cin >> l;
        cout << "Enter the number of edges";
        cin >> m;
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                incidence[i][j] = 0;
            }
        }
        int a, b;
        cout << "Enter the edge in format \"a b\" ";
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            incidence[a][i] = -1;
            incidence[b][i] = 1;
        }
        cout << "Incidence Matrix is as follows:-\n";
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << incidence[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (ch == 2)
    {

        cout << "Enter the number of vertices";
        cin >> l;
        cout << "Enter the number of edges";
        cin >> m;
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= l; j++)
            {
                adjacent[i][j] = 0;
            }
        }
        int a, b;
        cout << "Enter the edge in format \"a b\" ";
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            adjacent[a][b] = 1;
        }
        cout << "Adjacent Matrix is as follows:-\n";
        for (int i = 1; i <= l; i++)
        {
            for (int j = 1; j <= l; j++)
            {
                cout << adjacent[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        /* code */
        cout << "Enter the number of vertices";
        cin >> l;
        cout << "Enter the number of edges";
        cin >> m;
        vector<int> adj[l+1];
        int a, b;
        cout << "Enter the edge in format \"a b\" ";
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            adj[a].push_back(b);
        }
        cout<<"Adjancency list as follows\n";
        for(int i=1; i<=l; i++)
        {
            cout<<i<<":- ";
            for(auto x:adj[i])
            {
                cout<<" "<<x;
            }
            cout<<endl;
        }
    }
}

int main()
{
    int x, y;
    cout << "Enter the type of Graph\n";
    cout << "1.Directed Graph\n2.Undirected Graph\n ";
    cin >> x;
    if (x == 1)
        directedGraph();
    else
    {
        undirectedGraph();
    }

    return 0;
}